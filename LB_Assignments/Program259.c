/*
Write a recursive program which accept number from user return smallest digit
Input: 87983
Output: 9

*/

#include<stdio.h>

int Min( int iNo)
{
    static int iMin=9;
    int iDigit=0;
    if(iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        if(iDigit<iMin)
        {
            iMin=iDigit;
        }
        Min(iNo);
    }
    return iMin;
}

int main()
{
    int iValue=0,iRet=0;
    printf("Enter a number \n");
    scanf("%d",&iValue);

    iRet=Min(iValue);

    printf("Min digit is %d\n",iRet);

    return 0;
}

/*

main
|
|
|
Min(87983)  iNo=8798 ,iDigit=3
|
|
|
Min(8798)   iNo=879 ,iDigit=8
|
|
|
Min(879)    iNo=87 , iDigit=9
|
|
|
Min(87)     iNo=8  ,iDigit=7
|
|
|
Min(8)      iNo=0 ,iDigit=8
|
|
|
Min(0)      iNo=0, iDigit=0



--------------------
    Static Section
iMin=3

--------------------


*/