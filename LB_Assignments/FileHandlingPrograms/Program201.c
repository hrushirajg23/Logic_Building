//Accept file name from user and open that file in read mode

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    char FileName[30]={'\0'};

    printf("\nEnter the File name you want to open: ");
    scanf("%s",FileName);

    fd=open(FileName,O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to open files %s with File Descriptor %d",FileName,fd);
    }
    else
    {
        printf("\nFile opened Successfully ");
    }

    close(fd);

    return 0;
}