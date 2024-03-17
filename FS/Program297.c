//Accept file name from user  and read that data 
//Bookmark
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>   //universal standard
#include<fcntl.h>

int main()
{
    char FileName[30];
    int fd=0;
    int iRet=0;

    char Arr[100]={'\0'};
    char Brr[100]={'\0'};
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

        iRet=read(fd,Arr,10); 

        printf("%d bytes gets successfully read...",iRet);

        printf("\nData from file is :%s",Arr);
        
        iRet=read(fd,Brr,12); //book marked automatically and will read data after 1st function call

        printf("%d bytes gets successfully read...",iRet);

        printf("\nData from file is :%s",Brr);

        close(fd);
    }
    return 0;
}
