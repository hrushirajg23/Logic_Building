//1.since our project is virtual there is no data block 
//2. Boot Block pn kadhta yenar nahi karan our project is virtual 
//3.  UAREA nahie karan apla project already ram var ahe
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

#define MAXINODE 5  //mhanje maximum 5 inodes karu shakto 

#define READ 1
#define WRITE 2
//execute pn asto je apan aply project madhe include nahi karat

#define MAXFILESIZE 100

#define REGULAR 1
#define SPECIAL 2

#define START 0
#define CURRENT 1
#define END 2

typedef struct superblock
{
    int TotalInodes;
    int FreeInode;

}SUPERBLOCK,*PSUPERBLOCK;

typedef struct inode
{
    char FileName[30];
    int InodeNumber;
    int FileSize;
    int FileActualSize;
    int FileType;
    char *Buffer;
    int LinkCount;
    int ReferenceCount;
    int permission; //1 2 3
    struct inode *next;
}INODE,*PINODE,**PPINODE;

//struct inode = INODE;
//struct inode * =*PINODE
//struct inode ** == **PPINODE

typedef struct filetable  //array of structures
{
    int readoffset;
    int writeoffset;
    int count;
    int mode; // 1 2 3
    PINODE ptrinode;
    //strucr inode * ptrinode
}FILETABLE,*PFILETABLE;

typedef struct ufdt
{
    PFILETABLE ptrfiletable;                //UAREA madhla ufdt is array of Structures which contain pointer to element in FileTable;
    //struct filetable *ptrfiletable     //each index stores address of an index in FILETABLE array                       
                                         //mhanjech each element of ufdt array must be of 8 bytes which stores address
                                         
}UFDT;


UFDT UFDTArr[50];  //struct ufdt UFDTArr[50]

SUPERBLOCK SUPERBLOCKobj;//struct superblock obj

PINODE head=NULL; //struct inode *head=NULL

/*
    Name:- man

    @param:- Command
    
    return:- none
    
    Description:- Provides a manual for user by providing Description and usage of command given by user in the CVFS
*/
void man(char *name)
{
    if(name==NULL)
    {
        return;
    }
    else if(strcmp(name,"create")==0)
    {
        printf("Description : Used to create new regular file\n");
        printf("Usage: create_FileName Permission\n");
    }
    else if(strcmp(name,"read")==0)
    {
        printf("Description: used to read data from regular file\n");
        printf("Usage: read File_name No_of_Bytes_of_Read\n");
    }
    else if(strcmp(name,"write")==0)
    {
        printf("Description: used to write into regular file\n");
        printf("Usage: write File_Name \n After this enter the data we want to write\n");
    }
    else if(strcmp(name,"ls")==0)
    {
        printf("Description: Used to list all information of files\n");
        printf("Usage: ls\n");
    }
    else if(strcmp(name,"stat")==0)
    {
        printf("Description: Used to display information of file\n");
        printf("Usage: stat File_Name\n");
    }
    else if(strcmp(name,"fstat")==0)
    {
        printf("Description: Used to display information of file\n");
        printf("Usage: stat File_Descriptor\n");
    }
    else if(strcmp(name,"truncate")==0)
    {
        printf("Description: Used to remove data from file\n");
        printf("Usage: truncate File_Name\n");
    }
    else if(strcmp(name,"open")==0)
    {
        printf("Description: Used to open existing file\n");
        printf("Usage: open File_Name mode\n");
    }
    else if(strcmp(name,"close")==0)
    {
        printf("Description: Used to close opened file\n");
        printf("Usage: close File_Name\n");
    }
    else if(strcmp(name,"closeall")==0)
    {
        printf("Description: Used to close all opened files\n");
        printf("Usage: closeall \n");
    }
    else if(strcmp(name,"lseek")==0)
    {
        printf("Description: Used to change file offset\n");
        printf("Usage: lseek File_Name ChangeInOffset StartPoint\n");
    }
    else if(strcmp(name,"rm")==0)
    {
        printf("Description: Used to delete the file\n");
        printf("Usage: rm File_Name\n");
    }
    else
    {
        printf("ERROR : No manual entry available\n");
    }
}

/*
    Name:- DisplayHelp

    @param:- none
    
    return:- none
    
    Description:- gives description of avalable commands in CVFS
*/

void DisplayHelp()
{
    printf("ls : To list out all files\n");
    printf("clear: to clear the console\n");
    printf("open: to open the file\n");
    printf("close: to close the file\n");
    printf("closeall : to close all opened files\n");
    printf("read: To read contents from file\n");
    printf("write: To Write contents into file\n");
    printf("exit: To terminate file system\n");
    printf("stat: To display information of file using name\n");
    printf("fstat: To display information of file using file descriptor\n");
    printf("truncate: to remove all data from file\n");
    printf("rm: To Delete the File\n");
}


/*
    Name:- GetFDFromName

    @param:- File name
    
    return:- file descriptor
    
    Description:- searches through the DILB by matching the correct FileName and thus returning its file descriptor
*/
int GetFDFromName(char *name)
{
    int i=0;
    
    while(i<50)
    {
        if(UFDTArr[i].ptrfiletable!=NULL)
        {
            if(strcmp(UFDTArr[i].ptrfiletable->ptrinode->FileName,name)==0)
            {
                break;
            }
        }
        i++;
    }
    if(i==50)
    {
        return -1;
    }
    else 
    {
        return i;
    }
}


/*
    Name:- Get_Inode

    @param:- File name
    
    return:- address of inode
    
    Description:- compares given file name with FileName in each inode and returns the matching one.
*/

PINODE Get_Inode(char *name)
{
    PINODE temp=head;
    int i=0;

    if(name==NULL)
    {
        return NULL;
    }
    while(temp!=NULL)
    {
        if(strcmp(name,temp->FileName)==0)
        {
            break;
        }
        temp=temp->next;
    }
    return temp;  //returns address of that Inode
}

/*
    Name:- CreateDILB

    @param:- none
    
    return:- none
    
    Description:- creates a Linear Linked List of inodes 
*/
void CreatDILB()   //actual OS has Doubly Circular LL //but for simplicity we create Singly LL
{
    int i=1;
    
    PINODE newn=NULL;  //struct inode * newn=NULL;
    PINODE temp=head;   //struct inode *temp=head

    while(i<=MAXINODE)   //50 inodes cha DILB
    {
        newn=(PINODE)malloc(sizeof(INODE));

        newn->LinkCount=0;
        newn->ReferenceCount=0;
        newn->FileType=0;
        newn->FileSize=0;
        newn->Buffer=NULL;
        newn->next=NULL;
        newn->InodeNumber=i;

        if(temp==NULL)
        {
            head=newn;
            temp=head;
        }
        else
        {
            temp->next=newn;   //Insert Last operation
            temp=temp->next;    //
        }
        i++;
    }
    printf("DILB created successfully\n");
}

/*
    Name:- InitialiseSuperBlock

    @param:- none
    
    return:- none
    
    Description:- sets TotalInodes and FreeInodes to MAXINODE(50) which decrements each time an inode is assigned to file
*/

void InitialiseSuperBlock()
{
    int i=0;
    while(i<MAXINODE)
    {
        UFDTArr[i].ptrfiletable=NULL;
        i++;
    }
    SUPERBLOCKobj.TotalInodes=MAXINODE;
    SUPERBLOCKobj.FreeInode=MAXINODE;
}


/*
    Name:- CreateFile

    @param:- FileName, permissions(READ/WRITE/READ+WRITE)
    
    return:- file descriptor
    
    Description:- creates a new file of name given by user if a name of such file does not already exist
                  sets mode in FILE TABLE according to permission given by user  
                  sets permission in inode structure according to permission given by user  
*/

int CreateFile(char *name,int permission)
{
    int i=0;
    PINODE temp=head;  //struct inode *temp=head

    if((name==NULL)|| (permission==0) ||(permission)>3)
    {
        return -1;
    }
    if(SUPERBLOCKobj.FreeInode==0)
    {
        return -2;
    }
    (SUPERBLOCKobj.FreeInode)--;

    if(Get_Inode(name)!=NULL)   //mhanje to DILB madhe travel karto ani shodhto ki kuthlya Inode madhe ji info store ahe tyacha madhe kuthlya 
                                //Inode cha FileName jar same asel tar return -3 karto karan same navachya 2 File nahi banvu shakat
    {
        return -3;  
    }
    while(temp!=NULL)
    {
        if(temp->FileType==0)  // jya Inode chya FileType 0 asel that is rikama node
                                //ma apan tya rikamya node la thambun tya node madhe navin create honarya File chi information store karto
                                //Page number 100- Maurice J Bach
        {
            break;
        }
        i++;
    }
    while(i<50)
    {
        if(UFDTArr[i].ptrfiletable==NULL)  //mhanje UFDT chya array madhe jo index pahile free asel i.e tyacha pointer is pointing to null
        {                                   //tya index madhe FileTable cha address store honar
            break;
        }
        i++;
    }
    UFDTArr[i].ptrfiletable=(PFILETABLE)malloc(sizeof(FILETABLE)); 
    //UFDTArr madhla jo index free disla tyacha madhe apan ek navin FileTable create karun tyacha address store kela

    UFDTArr[i].ptrfiletable->count=1;  //mhanje UFDT madhe jo address ahe tya address chya FileTable cha ek member ahe count i.e =1
    UFDTArr[i].ptrfiletable->mode=permission;  //user ne dileli permssion
    UFDTArr[i].ptrfiletable->readoffset=0;  //kuth pasun read karaycha(book mark concept of java file packer unpaker project)
    UFDTArr[i].ptrfiletable->writeoffset=0; //kuthun write karaycha

    UFDTArr[i].ptrfiletable->ptrinode=temp;

    strcpy(UFDTArr[i].ptrfiletable->ptrinode->FileName,name);  

    //mhanje UFDTArr[i]cha ptrfileTable jyala point kartoy (i.e jya FileTable la point kartoy) tya FileTable cha ptrinode jyala point kartoy tyacha FilenName = User ne dilela Filename
    //mhanje Incore Inode Table madhye tya Inode madhe FileInformation aste tychat FileName =User ne dilela FileName
//in our case Incore Inode Table is DILB  which has max 50 Inodes
    UFDTArr[i].ptrfiletable->ptrinode->FileType=REGULAR;
    UFDTArr[i].ptrfiletable->ptrinode->ReferenceCount=1;
    UFDTArr[i].ptrfiletable->ptrinode->FileSize=MAXFILESIZE;
    UFDTArr[i].ptrfiletable->ptrinode->LinkCount=1;
    UFDTArr[i].ptrfiletable->ptrinode->FileActualSize=0;
    UFDTArr[i].ptrfiletable->ptrinode->permission=permission;
    UFDTArr[i].ptrfiletable->ptrinode->Buffer=(char *)malloc(MAXFILESIZE);

    return i;  //index returned
}


/*
    Name:- rm_File

    @param:- FileName)
    
    return:- file descriptor
    
    Description:- creates a new file of name given by user if a name of such file does not already exist
                  sets mode in FILE TABLE according to permission given by user  
                  sets permission in inode structure according to permission given by user  
*/

int rm_File(char *name)
{
    int fd=0;

    fd=GetFDFromName(name);  //ji File delete karaychi ahe ticha fd return hoto
    if(fd==-1)
    {
        return -1;  //jar ashi file naselach tar -1 return hoto
    }
    (UFDTArr[fd].ptrfiletable->ptrinode->LinkCount)--;

    if(UFDTArr[fd].ptrfiletable->ptrinode->LinkCount==0)
    {
        UFDTArr[fd].ptrfiletable->ptrinode->FileType=0;
        //free(UFDTArr[fd].ptrfiletable->ptrinode->Buffer);
        free(UFDTArr[fd].ptrfiletable);   //File Table madhli entry free kar
    }
    UFDTArr[fd].ptrfiletable=NULL;
    (SUPERBLOCKobj.FreeInode)++;  //ek File remove zhali mhhanje ek Inode free zhala
}

int ReadFile(int fd,char *arr,int isize)
{
    int read_size=0;

    if(UFDTArr[fd].ptrfiletable==NULL)
    {
        return -1;
    }

    if(UFDTArr[fd].ptrfiletable->mode!=READ && UFDTArr[fd].ptrfiletable->mode!=READ+WRITE)
    {
        return -2;
    }
    if(UFDTArr[fd].ptrfiletable->ptrinode->permission!=READ  && UFDTArr[fd].ptrfiletable->ptrinode->permission!=READ+WRITE)
    {
        return -2;
    }
    if(UFDTArr[fd].ptrfiletable->readoffset==UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)
    {
        return -3;
    }
    if(UFDTArr[fd].ptrfiletable->ptrinode->FileType!=REGULAR)
    {
        return -4;
    }

    read_size=(UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)-(UFDTArr[fd].ptrfiletable->readoffset);  //Total Size - kuthlya offset pasun read karaycha

    if(read_size<isize)  //jar file madhla data user ne dilelya size peksha kami asel tar
    {   

        //char *strncpy(char *string1, const char *string2, size_t count);
        //string2 madhla data gets copied into string 1, ani kiti copy karayacha =isize
        //read_size mhanje ajun kiti no. of bytes cha data vachu shakto from offset to FileSize
            //to be stored in arr,what to store: Buffer i.e original data + offset(i.e. 1 extra character), sagla copy kar karan User aslelay file size peksha jasta read kaarayla sangtoy)
        strncpy(arr,(UFDTArr[fd].ptrfiletable->ptrinode->Buffer)+(UFDTArr[fd].ptrfiletable->readoffset),read_size);

        UFDTArr[fd].ptrfiletable->readoffset=UFDTArr[fd].ptrfiletable->readoffset+ read_size;
    }
    else
    {
        strncpy(arr,(UFDTArr[fd].ptrfiletable->ptrinode->Buffer)+(UFDTArr[fd].ptrfiletable->readoffset),isize);

        (UFDTArr[fd].ptrfiletable->readoffset)=(UFDTArr[fd].ptrfiletable->readoffset)+isize; //sagla read kela nantar offset last la pochel
    }
    return isize; //returning no. of bytes read
}


int WriteFile(int fd,char *arr,int isize)
{
    if((UFDTArr[fd].ptrfiletable->mode)!=WRITE  && (UFDTArr[fd].ptrfiletable->mode)!=READ+WRITE)
    {
        return -1;
    }
    if((UFDTArr[fd].ptrfiletable->ptrinode->permission)!=WRITE  && (UFDTArr[fd].ptrfiletable->ptrinode->permission)!=READ+WRITE)
    {
        return -1;
    }

    if((UFDTArr[fd].ptrfiletable->writeoffset==MAXFILESIZE))
    {
        return -2;
    }

    if((UFDTArr[fd].ptrfiletable->ptrinode->FileType)!=REGULAR)
    {
        return -3;
    }


    //Inode madhe char *Buffer navacha member asto which holds address of 1st character in the file 
    strncpy((UFDTArr[fd].ptrfiletable->ptrinode->Buffer)+(UFDTArr[fd].ptrfiletable->writeoffset),arr,isize);

    (UFDTArr[fd].ptrfiletable->writeoffset)=(UFDTArr[fd].ptrfiletable->writeoffset)+isize;

    (UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)=(UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)+isize;

    return isize;  
}


int OpenFile(char *name,int mode)   //most impoertant
{
    int i=0;
    //struct Inode *temp=NULL
    PINODE temp=NULL;

    if(name==NULL || mode <0)
    {
        return -1;
    }
    temp=Get_Inode(name);  //Get_Inode searches through the whole Linked list of DILB and compares name  if it matches with user's given name ,
                            //if it matches it returns address of that Inode
    if(temp==NULL)    //Jar Files ach nastil tar
    {
        return -2;
    }

    if(temp->permission<mode)
    {
        return -3;
    }

    while(i<50)
    {
        if(UFDTArr[i].ptrfiletable==NULL);  //jevha tyala UFDTArr chya array madhla asa element sapdel jyacha ptrfiletable(member) is not pointing to anyone i.e to free ahe
        {
            break; //tevha break hoto so that we can utilise the index which is free
        }
        i++;
    }

    UFDTArr[i].ptrfiletable=(PFILETABLE)malloc(sizeof(FILETABLE));
    if(UFDTArr[i].ptrfiletable==NULL)
    {
        return -1;
    }
    UFDTArr[i].ptrfiletable->count=1;
    UFDTArr[i].ptrfiletable->mode=mode;        
    if(mode==READ+WRITE)
    {
        UFDTArr[i].ptrfiletable->readoffset=0;
        UFDTArr[i].ptrfiletable->writeoffset=0;
    }
    else if(mode==READ)
    {
        UFDTArr[i].ptrfiletable->readoffset=0;
    }
    else if(mode==WRITE)
    {
        UFDTArr[i].ptrfiletable->writeoffset=0;
    }
    UFDTArr[i].ptrfiletable->ptrinode=temp;  //most imp
    (UFDTArr[i].ptrfiletable->ptrinode->ReferenceCount)++;
    
    return i;   //returning file descriptor
}

void CloseFileByfd(int fd)
{
    UFDTArr[fd].ptrfiletable->readoffset=0;
    UFDTArr[fd].ptrfiletable->writeoffset=0;
    (UFDTArr[fd].ptrfiletable->ptrinode->ReferenceCount)--;
}

int CloseFileByName(char *name)
{
    int i=0;
    i=GetFDFromName(name);

    if(i==-1)
    {
        return -1;
    }
    UFDTArr[i].ptrfiletable->readoffset=0;
    UFDTArr[i].ptrfiletable->writeoffset=0;
    (UFDTArr[i].ptrfiletable->ptrinode->ReferenceCount)--;
    return 0;
}

void CloseAllFile()
{
    int i=0;
    while(i<50)
    {
        if(UFDTArr[i].ptrfiletable!=NULL)
        {
            UFDTArr[i].ptrfiletable->readoffset=0;
            UFDTArr[i].ptrfiletable->writeoffset=0;
            (UFDTArr[i].ptrfiletable->ptrinode->ReferenceCount)--;
            break;
        }
        i++;
    }
}

//returns a position where the next read or write will start
int LseekFile(int fd,int size,int from)  //used to set open file's offset explcitly  //from= 0(begining) or 1(current) or 2(end of file)
{
    //START:the file's offset is set to offset bytes from the beginning of the file.
    //CURRENT:the file's offset is set to its current value plus the offset. The offset can be positive or negative.
    //END: the file's offset is set to the size of the file plus the offset. The offset can be positive or negative.

    if((fd<0)|| (from>2))
    {
        return -1;
    }
    if(UFDTArr[fd].ptrfiletable==NULL)
    {
        return -1;
    }

    if(UFDTArr[fd].ptrfiletable->mode==READ || UFDTArr[fd].ptrfiletable->mode==READ+WRITE)
    {
        if(from==CURRENT)
        {
            if(((UFDTArr[fd].ptrfiletable->readoffset)+size)>UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)
            {
                return -1;
            }
            if(((UFDTArr[fd].ptrfiletable->readoffset)+size)<0)
            {
                return 0;
            }
            (UFDTArr[fd].ptrfiletable->readoffset)=(UFDTArr[fd].ptrfiletable->readoffset)+size;
        }
        else if(from==START)
        {
            if(size>(UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize))
            {
                return -1;
            }
            if(size<0)
            {
                return -1;
            }
            (UFDTArr[fd].ptrfiletable->readoffset)=size;  //setting offset to offset (size) given by user  //Pg 117 Maurice J Bach

        }
        else if(from==END)
        {
            if((UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)+size >MAXFILESIZE)
            {
                return -1;
            }
            if(((UFDTArr[fd].ptrfiletable->readoffset)+size)<0)
            {
                return -1;
            }
            (UFDTArr[fd].ptrfiletable->readoffset)=(UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)+size;
        }
    }
    else if(UFDTArr[fd].ptrfiletable->mode==WRITE)
    {
        if(from==CURRENT)
        {
            if(((UFDTArr[fd].ptrfiletable->writeoffset)+size)>MAXFILESIZE)
            {
                return -1;
            }
            if(((UFDTArr[fd].ptrfiletable->writeoffset)+size)<0)
            {
                return -1;
            }
            if(((UFDTArr[fd].ptrfiletable->writeoffset)+size) > (UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize))
            {
                (UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)=(UFDTArr[fd].ptrfiletable->writeoffset)+size;
                UFDTArr[fd].ptrfiletable->writeoffset=(UFDTArr[fd].ptrfiletable->writeoffset)+size;
            }
            
        }
        else if(from==START)
        {
            if(size>MAXFILESIZE)
            {
                return -1;
            }
            if(size<0)
            {
                return -1;
            }
            if(size>(UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize))
            {
                UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize=size;
            }
            UFDTArr[fd].ptrfiletable->writeoffset=size;
        }
        else if(from==END)
        {
            if((UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)+size > MAXFILESIZE)
            {
                return -1;
            }
            if(((UFDTArr[fd].ptrfiletable->writeoffset)+size)<0)
            {
                return -1;
            }
            (UFDTArr[fd].ptrfiletable->writeoffset)=(UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)+size;
        }
    }
}


void ls_file()
{
    int i=0;
    //struct inode *temp=head;
    PINODE temp=head;

    if(SUPERBLOCKobj.FreeInode==MAXFILESIZE)
    {
        printf("\nERROR: Thereare no files\n");
        return;
    }

    printf("\n File name\tInode Number\tFile Size\tLink Count\n");
    printf("---------------------------------------------------\n");

    while(temp!=NULL)
    {
        if(temp->FileType!=0)
        {
            printf("%s\t\t%d\t\t%d\t\t%d\n",temp->FileName,temp->InodeNumber,temp->FileActualSize,temp->LinkCount);

        }
        temp=temp->next;
    }

    printf("---------------------------------------------------\n");    
}



int fstat_file(int fd)
{
    //struct inode *temp=head;
    PINODE temp=head;
    int i=0;

    if(fd<0)
    {
        return -1;
    }

    if(UFDTArr[fd].ptrfiletable==NULL)
    {
        return -2;
    }

    temp=UFDTArr[fd].ptrfiletable->ptrinode;

    printf("\n----------Statistical Information about file-----------\n");
    printf("File Name: %s\n",temp->FileName);
    printf("Inode Number: %d\n",temp->InodeNumber);
    printf("File Size:  %d\n",temp->FileSize);
    printf("Actual File Size:  %d\n",temp->FileActualSize);
    printf("Link Count: %d\n",temp->LinkCount);
    printf("Reference Count :%d\n",temp->ReferenceCount);

    if(temp->permission==1)
    {
        printf("File Permission : Read only\n");
    }
    else if(temp->permission==2)
    {
        printf("File Permission : Write only\n");
    }
    else if(temp->permission==3)
    {
        printf("File Permission : Read & Write\n");
    }
    printf("\n---------------------------------------------\n\n");

}


int stat_file(char *name)
{
    int i=0;
    PINODE temp=head;

    if(name==NULL)
    {
        return -1;
    }

    while(temp!=NULL)
    {
        if(strcmp(name,temp->FileName)==0)
        {
            break;
        }
        temp=temp->next;
    }
    if(temp==NULL)
    {
        return -2;
    }
     printf("\n----------Statistical Information about file-----------\n");
    printf("File Name: %s\n",temp->FileName);
    printf("Inode Number: %d\n",temp->InodeNumber);
    printf("File Size:  %d\n",temp->FileSize);
    printf("Actual File Size:  %d\n",temp->FileActualSize);
    printf("Link Count: %d\n",temp->LinkCount);
    printf("Reference Count :%d\n",temp->ReferenceCount);

    if(temp->permission==1)
    {
        printf("File Permission : Read only\n");
    }
    else if(temp->permission==2)
    {
        printf("File Permission : Write only\n");
    }
    else if(temp->permission==3)
    {
        printf("File Permission : Read & Write\n");
    }
    printf("\n---------------------------------------------\n\n");

    return 0;
}

int truncate_File(char *name)//file rikami karaychi
{
    int fd=GetFDFromName(name);
    if(fd==-1)
    {
        return -1;
    }
    //void *memset(void *dest, int c, size_t count);
    memset(UFDTArr[fd].ptrfiletable->ptrinode->Buffer,0,1024);//The memset() function sets the first count bytes of dest to the value c. The value of c is converted to an unsigned character.
    UFDTArr[fd].ptrfiletable->readoffset=0;
    UFDTArr[fd].ptrfiletable->writeoffset=0;
    UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize=0;
}

int main()
{

    char *ptr=NULL;
    int ret=0,fd=0,count=0;

    char command[4][80], str[80], arr[1024];

    InitialiseSuperBlock();
    CreatDILB();

    //Shell
    while(1)
    {
        fflush(stdin); //
        strcpy(str,"");

        printf("\n Marvellous VFS: > ");

        fgets(str,80,stdin);   //scanf("%[^'\n']s",str)

        count=sscanf(str,"%s %s %s %s",command[0],command[1],command[2],command[3]);

        if(count==1)
        {
            if(strcmp(command[0],"ls")==0)
            {
                ls_file(); 
            }
            else if(strcmp(command[0],"close all")==0)
            {
                CloseAllFile();
                printf("All files closed sucessfully\n");
                continue;
            }
            else if(strcmp(command[0],"clear")==0)
            {
                system("cls");
                continue;
            }
            else if(strcmp(command[0],"help")==0)
            {
                DisplayHelp();
                continue;
            }
            else if(strcmp(command[0],"exit")==0)
            {
                printf("Terminating the Marvellous Virtual File System\n");
                break;
            }
            else
            {
                printf("ERROR: Command Not found\n");
                continue;
            }
        }
        else if(count==2)
        {
            if(strcmp(command[0],"stat")==0)
            {
                ret=stat_file(command[1]);
                if(ret==-1)
                {
                    printf("ERROR: Incorrect parameters\n");
                }
                if(ret==-2)
                {
                    printf("ERROR: There is no such file\n");
                }
                continue;
            }
            else if(strcmp(command[0],"fstat")==0)
            {
                ret=fstat_file(atoi(command[1]));
                if(ret==-1)
                {
                    printf("\nThere is no such File\n");
                }
                continue;
            }
            else if(strcmp(command[0],"close")==0)
            {
                ret=CloseFileByName(command[1]);
                if(ret==-1)
                {
                    printf("\nThere is no such File\n");
                }
                continue;
            }
            else if(strcmp(command[0],"rm")==0)
            {
                ret=rm_File(command[1]);
                if(ret==-1)
                {
                    printf("\nThere is no such File\n");
                }
                continue;
            }
            else if(strcmp(command[0],"man")==0)
            {
                man(command[1]);
            }
            else if(strcmp(command[0],"write")==0)
            {
                fd=GetFDFromName(command[1]);
                if(fd==-1)
                {
                    printf("Error: Incorrect parameter\n");
                    continue;
                }
                printf("Enter the data: \n");
                scanf("%[^'\n']s",arr);

                ret=strlen(arr);
                if(ret==0)
                {
                    printf("\nIncorrect parameter: \n");
                    continue;
                }
                //return no. of bytes written
                ret=WriteFile(fd,arr,ret);  //(kashat lihaychay,kay lihaychay,kiti lihaychay)

                if(ret==-1)
                {
                    printf("ERROR: Permission deneied\n");
                }
                if(ret==-2)
                {
                    printf("ERROR: There is no sufficient memory to write\n");
                }
                if(ret==-3)
                {
                    printf("ERROR: It is not a regular file\n");
                }
            }
            else if(strcmp(command[0],"truncate")==0)
            {
                ret=truncate_File(command[1]);
                if(ret==-1)
                {
                    printf("ERROR: Incorrect paramter\n");
                }
            }
            else
            {
                printf("ERROR: Command not found\n");
                continue;
            }
        }
        else if(count==3)
        {
            if(strcmp(command[0],"create")==0)
            {
                ret=CreateFile(command[1],atoi(command[2]));
                if(ret>=0)
                {
                    printf("File is successfully created with file descriptio %d\n",ret);
                }
                if(ret==-1)
                {
                    printf("ERROR: Incorrect parameters\n");
                }
                if(ret==-2)
                {
                    printf("ERROR: There is no inodes\n");
                }
                if(ret==-3)
                {
                    printf("ERROR: File already exists\n");
                }
                if(ret==-4)
                {
                    printf("ERROR: Memory allocation failure\n");
                }
            }
            else if(strcmp(command[0],"open")==0)
            {
                ret=OpenFile(command[1],atoi(command[2]));
                if(ret>=0)
                {
                    printf("File is successfully opened with file descriptio %d\n",ret);
                }
                if(ret==-1)
                {
                    printf("ERROR: Incorrect parameters\n");
                }
                if(ret==-2)
                {
                    printf("ERROR: File not present\n");
                }
                if(ret==-3)
                {
                    printf("ERROR: Permission denied\n");
                }
                continue;
            }
            else if(strcmp(command[0],"read")==0)
            {
                ret=GetFDFromName(command[1]);
                if(fd==-1)
                {
                    printf("Error: Incorrect parameter \n");
                    continue;
                }
                ptr=(char *)malloc(sizeof(atoi(command[2]))+1);
                if(ptr==NULL)
                {
                    printf("Memory allocation failure\n");
                    continue;
                }
                //returning no. of bytes read
                ret=ReadFile(fd,ptr,atoi(command[2]));
                if(ret==-1)
                {
                    printf("ERROR: File not existing\n");
                }
                if(ret==-2)
                {
                    printf("ERROR: permission denied\n");
                }
                if(ret==-3)
                {
                    printf("ERROR:Reached end of the file\n");
                }
                if(ret==-4)
                {
                    printf("ERROR: It is not regular file\n");
                }
                if(ret==0)
                {
                    printf("ERROR: File is empty\n");
                }
                if(ret>0)
                {
                    //write(fd,ptr,ret); //write(2,ptr,)
                    printf("%s",ptr);
                }
                continue;
            }
            else
            {
                printf("ERROR: Command not found\n");
                continue;
            }
        }
        else if(count==4)
        {
            if(strcmp(command[0],"lseek")==0)
            {
                fd=GetFDFromName(command[1]);
                if(fd==-1)
                {
                    printf("Incorrect paramter\n");
                    continue;
                }
                ret=LseekFile(fd,atoi(command[2]),atoi(command[3]));
                if(ret==-1)
                {
                    printf("\nUnable to perform lseek\n");
                }
            }
            else
            {
                printf("ERROR: Command not found\n");
                continue;
            }
        }
        else
        {
            printf("ERROR: Command not found\n");
            continue;
        }
    }

    return 0;
}
