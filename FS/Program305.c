//Copy data from existing file into new file
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>   //universal standard
#include<fcntl.h>
#include<string.h>

#define BUFFERSIZE 1024

int main()
{
    int fdread=0,fdwrite=0,iRet=0;
    char Buffer[BUFFERSIZE]={'\0'};
    char FnameSrc[30];    //source name
    char FnameDest[30];  //destination name

    printf("\nEnter the name of existing File: ");
    scanf("%s",FnameSrc);

    printf("\nEnter the name of new file we want to create File: ");
    scanf("%s",FnameDest);

    fdread=open(FnameSrc,O_RDONLY);
    if(fdread==-1)
    {
        printf("\nFailure in opening existing file\n");
        return -1;
    }  

    fdwrite=creat(FnameDest,0777);
    if(fdwrite==-1)
    {
        printf("\nFailure in creating new file\n");
        return -1;
    }

    while((iRet=read(fdread,Buffer,sizeof(Buffer)))!=0)
    {
        write(fdwrite,Buffer,iRet);
    }

    close(fdread);
        close(fdwrite);

    printf("File copy successfull!");




    return 0;
}
