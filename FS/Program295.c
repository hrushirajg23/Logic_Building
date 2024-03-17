//Accept file name from user and accept data from user and write that data into file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>   //universal standard
#include<fcntl.h>
#include<string.h>

int strlenX(char *str)
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
    char FileName[30];
    int fd=0;
    int iRet=0;

    char Arr[100]={'\0'};
    printf("\nEnter the name of file that you want to open from the current directory\n");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR | O_APPEND);

    if(fd==-1)
    {
        printf("\nUnable to open %s file\n",FileName);
    }
    else
    {
        printf("%s gets opened successfully with file descriptor %d\n",FileName,fd);

        printf("\nEnter the data that you want to write into the file..\n");
        scanf(" %[^'\n']s",Arr);

        iRet=write(fd,Arr,strlen(Arr));  //string.h header filecha inbuilt function strlen() pn vapru shakto

        printf("%d bytes gets successfully written into file...");

        close(fd);
    }
    return 0;
}
