#include<stdio.h>

void displayI()
{
    int iCnt=1;
    
    while(iCnt<=5)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }
}

int main()
{
    displayI();
    return 0;
}