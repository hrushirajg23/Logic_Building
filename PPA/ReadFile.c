#include<stdio.h>
#include<fcntl.h>   //File Control (has file control operations)
#include<unistd.h>  //Universal Standards
#include<string.h>
int main()
{
    int fd=0;  //File descriptor

    char Arr[20];
    int Ret=0;

    fd=open("Marvellous.txt",O_RDWR );  

    Ret=read(fd,Arr,10);
    //  write(Kashat lihayha,Kashatun Vachaycha,Kiti vachaycha(10 letters in our case))

    printf("%d bytes gets written in the File\n",Ret);

    printf("Data is %s\n",Arr);

    close(fd);
    
    return 0;

    
}

//O_RDONLY : Read
//O_WRONLY : Write
//O_RDWR   :Read+Write
