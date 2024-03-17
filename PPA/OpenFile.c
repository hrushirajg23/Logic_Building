#include<stdio.h>
#include<fcntl.h>   //File Control (has file control operations)
#include<unistd.h>  //Universal Standards

int main()
{
    int fd=0;  //File descriptor

    fd=open("Marvellous.txt",O_RDWR);

    if(fd!=-1)
    {
        printf("\nFile is Successfully Opened with FD : %d",fd);
    }
    close(fd);
    return 0;

    
}

//O_RDONLY : Read
//O_WRONLY : Write
//O_RDWR   :Read+Write
