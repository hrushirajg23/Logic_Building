/*To create new regular file

Syntax: int creat(char *file_name,int permission);

file_name: name of new file
permission: file permissions(0777)

Read:4
Write:2
Execute:1

Owner of file
Group members 
others

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>   //universal standard
#include<fcntl.h>

int main()
{
    int fd=0;

    fd=creat("Marvellous.txt",0777);

    if(fd==-1)
    {
        printf("Unable to open file..\n");
    }
    else
    {
        printf("\nFile successfully opened with fd %d",fd);
        close(fd);

        printf("\nFile gets successfully closed\n");
    }

    return 0;
}
