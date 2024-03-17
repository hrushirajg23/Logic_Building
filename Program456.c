//head recusrion

#include<stdio.h>


void displayR()     //recursive
{
    static int iCnt=1;  
    
    if(iCnt<=5)
    {
        iCnt++;
        displayR();
        printf("%d\t",iCnt);
    }
    
}

int main()
{
    displayR();
    return 0;
}