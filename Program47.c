//displaying all factors of a number entered by user
//Managing time complexity

#include<stdio.h>

void DisplayFactors(int iNo1)
{
    int iCnt=0;

    //   1      2        3
    for(iCnt=1;iCnt<=(iNo1/2);iCnt++)  //A numbers factors are always less than or equal to its half value 
    {//TimeComplexity is managed  
        if(iNo1%iCnt==0)        //4
        {
            printf("%d is factor of %d\n",iCnt,iNo1);
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