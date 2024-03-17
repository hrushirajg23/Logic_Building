/*
Write a program which accepts file name from user and accept one character and
count numbr of occurence s of that character from that file
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#define BUFFERSIZE 1024

int CountChar(char *FName,char Ch)
{
    int i=0,fd=0,iRet=0,iCnt=0;
    fd=open(FName,O_RDONLY);
    if(fd==-1)
    {
        printf("Cannot open file %s",FName);
        return -1;
    }
    char Arr[BUFFERSIZE]={'\0'};

    while((iRet=read(fd,Arr,sizeof(Arr)))!=0)
    {
        for(i=1;i<=iRet;i++)
        {
            if(Ch==Arr[i])
            {
                iCnt++;
            }
        }
    }
    close(fd);
    return iCnt;

}

int main()
{
    char FileName[30];
    int fd=0,iRet=0;
    char cValue='\0';

    printf("\nEnter file name:  ");
    scanf("%s",FileName);

    printf("\nEnter the character you want to count occurences of: ");
    scanf(" %c",&cValue);

    iRet=CountChar(FileName,cValue);

    printf("\nNUmber of occurences are %d",iRet);


    return 0;
}