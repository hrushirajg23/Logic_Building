//Accept character from user and check whether it is digit or not

#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
    if(ch>='0' && ch<='9')
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
    char cValue='\0';
    bool bRet=false;

    printf("\nEnter a character: ");
    scanf("%c",&cValue);

    bRet=ChkDigit(cValue);

    if(bRet==true)
    {
        printf("\nIt is a Digit ");
    }
    else
    {
        printf("\nIt is not a Digit ");
    }
    return 0;
}