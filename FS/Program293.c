//Accept file name from user and create that file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>   //universal standard
#include<fcntl.h>

int main()
{
    char FileName[30];
    int fd=0;

    printf("\nEnter the name of file that you want to create into the current directory\n");
    scanf("%s",FileName);

    fd=creat(FileName,0777);

    if(fd==-1)
    {
        printf("\nUnable to open %s file\n",FileName);
    }
    else
    {
        printf("%s gets created successfully with file descriptor %d\n",FileName,fd);
        
    }

    return 0;
}
