/*
write a program which displays ascii table . 
Table contains symbol , Decimal , Hexadecimal and octal representation 
of every member from 0 to 255

*/

#include<stdio.h>
#include<stdbool.h>

void DisplayASCII()
{
    

    int iCnt=0;

    for(iCnt=0;iCnt<255;iCnt++)
    {
        printf("%c\t%d\t%x\t%o",iCnt,iCnt,iCnt,iCnt);
        printf("\n");
    }
}

int main()
{
    DisplayASCII();

    return 0;
}