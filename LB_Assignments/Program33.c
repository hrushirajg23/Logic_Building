//Write a program to find factorial of a given number
//Time Complexity: O(n)
#include<stdio.h>

int Factorial(int iNo)
{
    int iFact=1;
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    //   1       2        3
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iFact=iFact*iCnt;    //4
    }
    return iFact;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("\nEnterr number: ");
    scanf("%d",&iValue);
    iRet=Factorial(iValue);

    printf("Factorial of the number is %d",iRet);


    return 0;
}


/*
1
2 4 3 
2 4 3
2 4 3
...iNo times

*/