//displaying all factors of a number entered by user

#include<stdio.h>

void DisplayFactors(int ino1)
{
    int iCnt=0;

    //   1      2        3
    for(iCnt=1;iCnt<ino1;iCnt++)
    {
        if(ino1%iCnt==0)        //4
        {
            printf("%d is factor of %d\n",iCnt,ino1);
        }
    }
}

int main()
{
    int iValue=0;
    printf("\nEnter the number: ");
    scanf("%d",&iValue);
    DisplayFactors(iValue);

    return 0;
}