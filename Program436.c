#include<stdio.h>

void displayI()
{
    int iCnt=1;
    
    while(iCnt<=4)
    {
        printf("*\t");
        iCnt++;
    }
}

void displayR()     //recursive
{
    static int iCnt=1;  
    
    if(iCnt<=5)
    {
        printf("*\n");
        iCnt++;
        displayR();
    }
    
}

int main()
{
    displayR();
    return 0;
}