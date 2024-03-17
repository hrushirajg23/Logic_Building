//Accept character from user and check whether it is alphabet or not

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
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

    bRet=ChkAlpha(cValue);

    if(bRet==true)
    {
        printf("\nIt is an alphabet");
    }
    else
    {
        printf("\nIt is not an alphabet");
    }
    return 0;
}