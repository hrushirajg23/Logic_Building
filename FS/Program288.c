/*To write the data into file



*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>   //universal standard
#include<fcntl.h>

int main()
{
    int fd=0;
    int iRet=0;

    char Arr[]="Pre-Placement Acitvity";

    fd=open("Marvellous.txt",O_RDWR); //adhi data asel already tar to delete houn ha data lhila janar

    if(fd==-1)
    {
        printf("Unable to open file..\n");
    }
    else
    {
        iRet=write(fd,Arr,22);    
        printf("22 bytes gets written successfully..\n");
        close(fd);
    }

    return 0;
}
