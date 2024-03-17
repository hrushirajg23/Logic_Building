//program: using ladder if else

#include<stdio.h>

void DisplayExamTime(int iValue)
{
    if(iValue<0 || iValue>5 )
    {
        printf("\nENter a valid input..");
    }
    if(iValue==1)
    {
        printf("\nYour exam is at 8am");
    }
    else if(iValue==2)
    {
        printf("\nYour exam is at 9am");
    }
    else if(iValue==3)
    {
        printf("\nYour exam is at 10am");
    }
    else if(iValue==4)
    {
        printf("\nYour exam is at 11am");
    }
    else if(iValue==5)
    {
        printf("\nYour exam is at 12pm");
    }
    
}

int main()
{
    auto int istandard=0;
    printf("\nEnter your standard: ");
    scanf("%d",&istandard);

    DisplayExamTime(istandard);
    return 0;
}
