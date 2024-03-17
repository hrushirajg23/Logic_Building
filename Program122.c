//Program to take a character from user in smallcase and convert it to capitalcase

#include<stdio.h>

char ConverCapital(char cValue)
{
    return cValue-32;
}

int main()
{
    char ch='\0';
    char cRet='\0';
    printf("\nEnter the character: ");
    scanf("%c",&ch);

    cRet=ConverCapital(ch);

    printf("\nConverted Capital case is %c",cRet);

    return 0;
}