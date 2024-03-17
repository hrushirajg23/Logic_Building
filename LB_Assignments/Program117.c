//Accept character from user and check whether it is capital or not

#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
    if(ch>='A' && ch<='Z')
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

    bRet=ChkCapital(cValue);

    if(bRet==true)
    {
        printf("\nIt is a Capital letter");
    }
    else
    {
        printf("\nIt is not a Capital letter");
    }
    return 0;
}