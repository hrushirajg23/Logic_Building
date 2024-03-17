//Accept character from user and check whether it is small case or not

#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
    if(ch>='a' && ch<='z')
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

    bRet=ChkSmall(cValue);

    if(bRet==true)
    {
        printf("\nIt is a Small case character ");
    }
    else
    {
        printf("\nIt is not a Small case character");
    }
    return 0;
}