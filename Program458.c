

#include<stdio.h>


void displayR(int iNo)     //recursive
{
      
    
    if(iNo>=1)
    {
        iNo--;
        
        
        displayR(iNo);
        printf("%d\t",iNo);
        
    }
    
}

int main()
{
    displayR(5);
    return 0;
}