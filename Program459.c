

#include<stdio.h>


void displayR(int iNo)     //recursive
{
      
    
    if(iNo>=1)
    {
    
        
        
        displayR(iNo-1);
        printf("%d\t",iNo);
        
    }
    
}

int main()
{
    displayR(5);
    return 0;
}