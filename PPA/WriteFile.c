#include<stdio.h>
#include<fcntl.h>   //File Control (has file control operations)
#include<unistd.h>  //Universal Standards
#include<string.h>
int main()
{
    int fd=0;  //File descriptor

    char Arr[]="Marvellous Infosystems";
    int Ret=0;

    fd=open("Marvellous.txt",O_RDWR);

    Ret=write(fd,Arr,strlen(Arr));
    //  write(Kashat lihayha,Kay lihaycha,Kiti lihaycha(22 letters in our case))

    printf("%d bytes gets written in the File\n",Ret);
    
    close(fd);
    return 0;

    
}

//O_RDONLY : Read
//O_WRONLY : Write
//O_RDWR   :Read+Write
