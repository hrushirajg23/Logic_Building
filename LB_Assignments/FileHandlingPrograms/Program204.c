//Application which accepts file name from user and display size of file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#define BUFFERSIZE 1024

int main()
{
    int fd=0;
    char FileName[30]={'\0'};
    int iRet=0,i=0,iSize=0;
    char Arr[BUFFERSIZE]={'\0'};

    printf("\nEnter the File name you want to open: ");
    scanf("%s",FileName);

    fd=open(FileName,O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to open file %s \n",FileName);
    }
    else
    {
        while((iRet=read(fd,Arr,sizeof(Arr)))!=0)
        { 
            iSize=iRet;
        } 
        printf("%d\n",iSize);
        
        close(fd);
    }

    return 0;
}