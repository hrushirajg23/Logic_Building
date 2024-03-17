//Program to check if given character is capital or not

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char cValue)
{
    if(cValue>='A' && cValue<='Z')  //good programming practice
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
    char ch='\0';
    bool bRet=false;

    printf("\nEnter the character: ");
    scanf("%c",&ch);

    bRet=CheckCapital(ch);

    if(bRet==true)
    {
        printf("\nIt's a capital letter");
    }
    else
    {
        printf("\nIt's not a capital letter");
    }
    return 0;
}