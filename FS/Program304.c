//Accept file name from user and read whole file and count small letters
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
    int i=0,iCount=0;

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
           for(i=0;i<iRet;i++)
           {
                if((Arr[i]>='a') && (Arr[i]<='z'))
                {
                    iCount++;
                }
           }
        }
        printf("\nNumber of capital letters in file are %d",iCount);
    }
    return 0;
}
