/*
Write a recursive program which accept number from user return largest digit
Input: 87983
Output: 9

*/

#include<stdio.h>

int Max(int iNo)
{
    static int iMax=0;
    int iDigit=0;
    if(iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        if(iDigit>iMax)
        {
            iMax=iDigit;
        }
        Max(iNo);
    }
    return iMax;
}

int main()
{
    int iValue=0,iRet=0;
    printf("Enter a number \n");
    scanf("%d",&iValue);

    iRet=Max(iValue);

    printf("Max digit is %d\n",iRet);

    return 0;
}

/*

main
|
|
|
Max(87983)  iNo=8798 ,iDigit=3
|
|
|
Max(8798)   iNo=879 ,iDigit=8
|
|
|
Max(879)    iNo=87 , iDigit=9
|
|
|
Max(87)     iNo=8  ,iDigit=7
|
|
|
Max(8)      iNo=0 ,iDigit=8
|
|
|
Max(0)      iNo=0, iDigit=0



--------------------
    Static Section
iMax=9

--------------------


*/