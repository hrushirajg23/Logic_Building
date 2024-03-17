// Take a user from user and check whether number is perfect number or not
//Perfect number is a number whose factors sum is equal to the number itself

#include <stdio.h>
#include <stdbool.h>

bool CheckPerfect(int iNo)
{
    if(iNo<0)    //updator   //input chukicha asel to badalnara  //for eg ,input negative asel tar , it changes to positive
    {
        iNo=-iNo;
    }
    int isum = 0;
    int iCnt = 0;
    //   1          2                  3
    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)  //4
        {
            isum = isum + iCnt;
        }
    }
    if (isum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("\nEnter the number: ");
    scanf("%d", &iValue);

    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("\n%d is Perfect Number...",iValue);
    }
    else
    {
        printf("\n%d is not a Perfect Number...",iValue);
    }

    return 0;
}