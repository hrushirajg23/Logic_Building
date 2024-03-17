/*Write a program which accepts number from user and if number is less than 50 then print small,
if it is greater then 50 and less than 100 then print medium,if it is greater than 100
then print large*/
//TIme Complexity O(1)

#include<stdio.h>

void Number(int iNo)
{
    if(iNo<=50)
    {
        printf("Small");
    }
    else if(iNo>50 && iNo<100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

int main()
{
    int iValue=0;
    printf("\nEnter Number: ");
    scanf("%d",&iValue);
    Number(iValue);
    return 0;
}
