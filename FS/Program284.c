#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>   //universal standard
#include<fcntl.h>

int main()
{
    int fd=0;

    fd=open("Program283.c",O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to open file..\n");
    }
    else
    {
        printf("\nFile successfully opened with fd %d",fd);
    }

    return 0;
}
