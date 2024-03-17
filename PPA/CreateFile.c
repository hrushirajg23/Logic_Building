#include<stdio.h>
#include<fcntl.h>   //File Control (has file control operations)
#include<unistd.h>  //Universal Standards

int main()
{
    int fd=0;  //File descriptor

    fd=creat("Marvellous.txt",0777);

    if(fd!=-1)
    {
        printf("\nFile is Successfully create with FD : %d",fd);
    }
    
    return 0;
}