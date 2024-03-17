/*
Write application which accept file name from user and one string from user.
Write that string at the end of that file
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFERSIZE 1024

int StrLenX(char *str)
{   
    int iCnt=0;
    while(*str!='\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    int fd=0;
    char Arr[BUFFERSIZE]={'\0'};
    char FileName[30]={'\0'};
    int iRet=0;

    printf("Enter name of File in which you want to write data: \n");
    scanf("%s",FileName);

    printf("\nEnter the string you want to write at the end of file\n");
    scanf(" %[^'\n']s",Arr);  //space given before % to avoid buffering

    fd=open(FileName,O_RDWR | O_APPEND);

    if(fd==-1)
    {
        printf("Unable to open file %s\n",FileName);
    }
    else
    {
        iRet=write(fd,Arr,StrLenX(Arr));

        printf("%d bytes written successfully",iRet);
    }

    close(fd);
    
    return 0;
}