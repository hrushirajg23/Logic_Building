//Application which accepts file name from user and create file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    char FileName[30]={'\0'};

    printf("\nEnter the File name you want to create: ");
    scanf("%s",FileName);

    fd=creat(FileName,0777);

    if(fd==-1)
    {
        printf("Unable to open files %s ",FileName);
    }
    else
    {
        printf("\nFile created Successfully ");
    }
    close(fd);

    return 0;
}