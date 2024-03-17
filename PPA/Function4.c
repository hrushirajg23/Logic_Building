#include<stdio.h>

int addition(int no1,int no2)
{
    int sum=0;
    sum=no1+no2;
    return sum;
}
int subtraction(int data1,int data2)
{
    int difference=0;
    difference=data1-data2;
    return difference;

}

int main()
{
    int Value1 =10;
    int Value2 =11;
    int Ans=0;

    Ans = addition(Value1,Value2);

    printf("\nAddition is : %d",Ans);

    Ans= subtraction(Value1,Value2);
    printf("\nSubtraction is : %d",Ans);

    return 0;
}



