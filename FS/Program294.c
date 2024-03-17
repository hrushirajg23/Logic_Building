//Accept file name from user and delete that file

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
    
    unlink(FileName);

    return 0;
}
