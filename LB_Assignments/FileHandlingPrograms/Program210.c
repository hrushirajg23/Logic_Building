/*
Program which accepts filename from user and one count from user 
and read that number of characters from starting position 
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#define BUFFERSIZE 1024

void DisplayN(char *FName,int iCnt)
{
    int fd=0;
    int iRet=0,i=0;
    char Arr[BUFFERSIZE]={'\0'};

    fd=open(FName,O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open file %s",FName);
    }

    iRet=read(fd,Arr,iCnt);

    for(i=0;i<=iRet;i++)
    {
        printf("%c",Arr[i]);
    }
    
}

int main()
{
    char FileName[30];
    int iCount=0;

    printf("\nEnter the filename : ");
    scanf("%s",FileName);

    printf("Enter the count of characters you want to read: ");
    scanf("%d",&iCount);

    DisplayN(FileName,iCount);

    return 0;
}