//Write a program which accepts number from user and check whether it contains 0 in it or not

#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    
    bool bFlag=false;
    int iDigit=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==0)
        {
            bFlag=true;
            break;
        }
        iNo=iNo/10;

    }
    return bFlag;

}

int main()
{
    int iValue=0;
    bool bRet=false;
    printf("\nEnter a number: ");
    scanf("%d",&iValue);
    bRet=CheckZero(iValue);
    if(bRet==true)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}