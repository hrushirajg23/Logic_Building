#include<stdio.h>

int addition(int no1,int no2)
{
    int Ans=0;
    Ans=no1+no2;
    return Ans;
}

int main()
{
    int value1=0;
    int value2=0;
    int Ret=0;
    printf("\nEnter the 1st value: ");
    scanf("%d",&value1);
    printf("\nEnter the 2nd value: ");
    scanf("%d",&value2);

    Ret=addition(value1,value2);
    printf("\nThe Addition is:  %d",Ret);

    return 0;
}