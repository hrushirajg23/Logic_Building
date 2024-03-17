

#include<stdio.h>


void displayR(int iNo)     //recursive
{
      
    
    if(iNo>=1)
    {
        printf("%d\t",iNo);
        iNo--;
        displayR(iNo);
        
    }
    
}

int main()
{
    displayR(5);
    return 0;
}