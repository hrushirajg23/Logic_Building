#include<stdio.h>
#include<fcntl.h>   //File Control (has file control operations)
#include<unistd.h>  //Universal Standards
#include<string.h>
int main()
{
    unlink("Marvellous.txt");

    printf("File deleted successfully");
    return 0;
}


