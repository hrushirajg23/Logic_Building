#include<stdio.h>

void displayI(int iNo)
{
    int iCnt=1;
    
    while(iCnt<=iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }
}



int main()
{
    displayI(4);
    return 0;
}