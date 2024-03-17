/*
Program which accepts File name from user and count 
number of WhiteSpaces  from that file
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#define BUFFERSIZE 1024

int CountWhite(char *FName)
{
    int fd=0;
    int Count=0,i=0;
    int iWhiteSpaces=0;
    char Arr[BUFFERSIZE] ={'\0'};
    fd=open(FName,O_RDONLY);
    if(fd==-1)
    {
        printf("Cannot open file %s",FName);
        return -1;
    }

    while((Count=read(fd,Arr,sizeof(Arr)))!=0)
    {
        for(i=0;i<Count;i++)
        {
            if(Arr[i] == ' ')
            {
                iWhiteSpaces++; 
            }
        }
    }
    close(fd);
    return iWhiteSpaces;

}

int main()
{
    char FileName[30];
    int iRet=0;

    printf("Enter the file Name: ");
    scanf("%s",FileName);

    

    iRet=CountWhite(FileName);

    printf("WhiteSpaces  are :%d",iRet);

    return 0;
}