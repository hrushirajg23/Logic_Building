#include<stdio.h>

int main()
{
    int num=0,Ans=0;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    Ans=num%2;
    if(Ans==0)
    {
        printf("\nNumber is even");
    }
    else
    {
        printf("\nNumber is odd");
    }
    return 0;
}