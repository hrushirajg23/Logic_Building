#include<stdio.h>

int main()
{
    int std=0;
    printf("\nPrimary School portal\n ");
    printf("\nEnter your Standard: ");
    scanf("%d",&std);
    
    if(std==1)
    {
        printf("\nyour exam is at 1pm");
    }
    else if(std==2)
    {
        printf("\nyour exam is at 2pm");
    }
    else if(std==3)
    {
        printf("\nYour exam is at 3 pm");

    }
    else if(std==4)
    {
        printf("\nYour exam is at 4 pm");

    }
    else
    {
        printf("\nInvalid Standard");
    }
    return 0;
}