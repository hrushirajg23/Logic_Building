//Write a program which accepts number from user and return multiplication of all digits

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit=0;
    int iMul=1;
    while(iNo!=0)  //2395  239 23  2 
    {
        iDigit=iNo%10;  //5  9   3  2
        if(iDigit==0)
        {
            iDigit=iDigit+1;   //if any digit is 0, we don't multiply it by other numbers, instead we make it 1 thus not affecting the multiplication
        }
        iMul=iMul*iDigit;  //5->45->135->270
        iNo=iNo/10;   //239  23 2 0
    }
    return iMul;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("\nEnter number: ");
    scanf("%d",&iValue);
    iRet=MultDigits(iValue);
    printf("%d",iRet);

    return 0;

}