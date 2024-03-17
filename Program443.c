#include<stdio.h>

void displayR(int iNo)
{
    static int iCnt=1;
    
    while(iCnt<=iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
        displayR(iNo);
    }
}



int main()
{
    displayR(4);
    return 0;
}