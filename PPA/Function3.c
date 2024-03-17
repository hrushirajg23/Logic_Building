#include<stdio.h>

int addition(int no1,int no2)
{
    int sum=0;
    sum=no1+no2;
    return sum;
}

int main()
{
    int Value1 =10;
    int Value2 =11;
    int Ans=0;

    Ans = (Value1,Value2);

    printf("\nAddition is : %d",Ans);
    return 0;
}