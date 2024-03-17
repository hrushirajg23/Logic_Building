//Write a program which accepts a number from user and printf even factors of that number

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;

    }
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt ==0 &&iCnt%2==0)   //18 //if ((iNo/2) %iCnt == 0) for odd factors will be displayed
        {
            printf(" %d", iCnt);
        }
    }

}

int main()
{
    auto int iValue=0;
    printf("\nEnter a number: ");
    scanf("%d",&iValue);
    DisplayFactor(iValue);

    return 0;
}