/*Write a program which acceptss number from user and 
return difference between summation of all its factors and non-factors*/

#include<stdio.h>

int SumDiff(int iNo)
{
    int iCnt=0;
    int iSumFact=0;
    int iSumNonFact=0;
    int iDiff=0;

    for(iCnt=1;iCnt<iNo;iCnt++)
    {    //12
        if(iNo%iCnt==0)    //1,2,3,4,6 = 16
        {
            iSumFact=iSumFact+iCnt;  //summation of factors
        }
        else            //5,7,8,9,10,11 =50
        {
            iSumNonFact=iSumNonFact+iCnt; //summation of factors
        }
    }
    iDiff=iSumFact-iSumNonFact;  //16-50
    return iDiff; //-34
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("\nEnter a number: ");
    scanf("%d",&iValue);

    iRet=SumDiff(iValue);
    if(iRet<0)
    {
        iRet=-iRet;  //-(-34)
    }

    printf("%d",iRet);  //34

    return 0;
}


//iSumFact
//iSumnonfact