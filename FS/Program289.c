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

    char Arr[]="Angular Web Development";

    fd=open("Marvellous.txt",O_RDWR | O_APPEND);  //adhichya data chya pudhe lilala jata navin data without erasing prev data

    if(fd==-1)
    {
        printf("Unable to open file..\n");
    }
    else
    {
        iRet=write(fd,Arr,23);    
        printf("%d bytes gets written successfully..\n",iRet);
        close(fd);
    }

    return 0;
}
