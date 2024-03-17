//Program to check if given character is small or not

#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char cValue)
{
    if((cValue>='a') && (cValue<='z'))  
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

    bRet=CheckSmall(ch);

    if(bRet==true)
    {
        printf("\nIt's a Small letter");
    }
    else
    {
        printf("\nIt's not a Small letter");
    }
    return 0;
}