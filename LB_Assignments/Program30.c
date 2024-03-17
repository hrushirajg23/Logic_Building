//Write a program which accepts N and prints first 5 multiples of N

//Time Complexity 0(1 )
#include<stdio.h>

void Multiples(int iNo)
{
    int iCnt=0;

        //1       //2          //3
    for(iCnt=iNo;iCnt<=iNo*5;iCnt=iCnt+iNo)
    {
        printf("%d ",iCnt);  //4
    }
}



int main()
{
    int iValue=0;
    printf("\nENter number: ");
    scanf("%d",&iValue);

    Multiples(iValue);
    return 0;
}