//Write a prograam which accepts number from user and display its Multiplication of factors

#include<stdio.h>

int MultFact(int iNo)
{
    int iMul=1;
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iMul=iMul*iCnt;
        }
    }
    return iMul;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("\nENter a number: ");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);

    printf("%d",iRet);
    return 0;

}