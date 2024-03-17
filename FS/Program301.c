//Accept file name from user and read whole file 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>   //universal standard
#include<fcntl.h>
#include<string.h>

#define BUFFERSIZE 1024

int main()
{
    char FileName[30];
    int fd=0;
    int iRet=0;
    int iSize=0;

    char Arr[BUFFERSIZE]={'\0'};
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

        while((iRet=read(fd,Arr,sizeof(Arr)))!=0)
        {
            printf("%d bytes get read from the file\n",iRet);
            iSize=iSize+iRet;
        }        
        printf("\nFile contains %d bytes in it\n",iSize);
    }
    return 0;
}
