#include<stdio.h>

void displayI()
{
    int iCnt=1;
    
    while(iCnt<=4)
    {
        printf("Jay Ganesh..\n");
        iCnt++;
    }
}

void displayR()     //recursive
{
    static int iCnt=1;  //to preserve value across function calls we use static 
    
    if(iCnt<=4)
    {
        printf("Jay Ganesh..\n");
        iCnt++;
        displayR();
    }
    printf("monkey\n");
}

int main()
{
    displayR();
    return 0;
}