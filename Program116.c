//Program to display whole ASCII table

#include<stdio.h>

int main()
{
    int iCnt=0;
    printf("----------------------------------------------");
    printf("------------------ASCII TABLE-----------------");
    printf("----------------------------------------------");

    printf("\n");
    for(iCnt=0;iCnt<127;iCnt++)
    {
        printf("%c\t%d\t%o\t%x",iCnt,iCnt,iCnt,iCnt);
        printf("\n");
    }

    printf("----------------------------------------------");
    return 0;
}