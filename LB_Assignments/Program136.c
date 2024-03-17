/*Write a program which accpet string from user and accept one character.
Check whether that character is prresent in the string or not*/

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str,char ch)
{
    bool bFlag=false;
    while(*str!='\0')
    {
        if(*str==ch)
        {
            bFlag=true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[20];
    char cValue='\0';
    bool bRet=false;

    printf("\nEnter the string: ");
    scanf("%[^'\n']s",Arr);

    printf("\nEnter the character: ");
    scanf(" %c",&cValue);

    bRet=ChkChar(Arr,cValue);

    if(bRet==true)
    {
        printf("\nCharacter found");
    }
    else
    {
        printf("\nCharacter not found");
    }

    return 0;
}