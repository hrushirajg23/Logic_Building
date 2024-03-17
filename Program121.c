//Program to take a character from user in Capitalcase and convert it to smallcase

#include<stdio.h>

char ConvertSmall(char cValue)
{
    return cValue+32;
}

int main()
{
    char ch='\0';
    char cRet='\0';
    printf("\nEnter the character: ");
    scanf("%c",&ch);

    cRet=ConvertSmall(ch);

    printf("\nConverted small case is %c",cRet);

    return 0;
}