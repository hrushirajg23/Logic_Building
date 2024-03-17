//Accept file name from user and read whole file 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>   //universal standard
#include<fcntl.h>
#include<string.h>


int main()
{
    char FileName[30];
    int fd=0;
    int iRet=0;

    char Arr[100]={'\0'};
    printf("\nEnter the name of file that you want to open from the current directory\n");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR);

    if(fd==-1)
    {
        printf("\nUnable to open %s file\n",FileName);
    }
    else
    {
        printf("%s gets opened successfully with file descriptor %d\n",FileName,fd);

        while((iRet=read(fd,Arr,sizeof(Arr)))!=0)  //eka veles 1024 bytes read karto  i.e sizeof(Arr)==BUFFERSIZE
        {                                          //so 1024+ to 2048 bytes cha data asel tar loop 2 vela firnar
            
            //mhanje pahile 1024 bytes read kelee ki bookmark tikde yenar ani mag bookmark pudche 1024 bytes read karnar
            //Ani jevha to bookmark ashya point la pochel ki read kelela data is 0 i.e, iRet=0
            //tevha loop thambel   //iRet=Number of bytes read 
            
            printf("%s",Arr);
        }        
    }
    return 0;
}
