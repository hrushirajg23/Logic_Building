//Write program which accept range from user and return addition of all even numbers
// in between that range(Range should contain positive numbers only)


//Time Complexity O(n)
#include<stdio.h>

int RangeSumEven(int iStart,int iEnd)
{
    int iCnt=0;
    int iSum=0;
    
    if(iStart<=iEnd)
    {
        for(iCnt=iStart;iCnt<=iEnd;iCnt++)
        {
            if(iCnt%2==0)
            {
                iSum=iSum+iCnt;
            }
        }
        return iSum;
    
    }
    else
    {
        return -1 ;
        
    }
    
}

int main()
{

    int iValue1=0,iValue2=0,iRet=0;
    printf("\nEnter starting point");
    scanf("%d",&iValue1);
    printf("\nEnter end point");
    scanf("%d",&iValue2);
    iRet=RangeSumEven(iValue1,iValue2);
    if(iRet>0)
    {
        printf("Addition is %d",iRet);
    
    }
    else
    {
        printf("\nInavlid Range");
    }
}