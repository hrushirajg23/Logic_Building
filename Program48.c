//Summation of  all factors of a number entered by user

//Time Complexity:0(n/2)

#include<stdio.h>

int SumFactors(int iNo1)
{
    int iCnt=0;
    int isum=0;

    //   1      2        3
    for(iCnt=1;iCnt<=(iNo1/2);iCnt++)   
    { 
        if(iNo1%iCnt==0)        //4
        {
            isum=isum+iCnt;
        }
    }
    return isum;
}

int main()
{
    int iValue=0;
    printf("\nEnter the number: ");
    scanf("%d",&iValue);
    
    int iRet=SumFactors(iValue);
    printf("\nThe sum of factors of %d is:  %d",iValue,iRet);

    return 0;
}