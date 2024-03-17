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
    int iCnt=1;  //problem ahe ki iCnt is auto storage class ani ek function call sampla ki pahilya function chi value zate(local variable)
                //stack frame chi size varun vadhat vadhat yete khali ani potential gap madhe ghuuste and when it tries to enter heap 
                //we get segmentation fault
    
    if(iCnt<=4)
    {
        printf("Jay Ganesh..\n");
        iCnt++;
        displayR();
    }
    
}

int main()
{
    displayR();
    return 0;
}