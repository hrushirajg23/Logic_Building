//Accept one character from user and convert case of that character

#include<stdio.h>

void DisplayConvert(char CValue)
{
    if(CValue>='A'&& CValue<='Z')
    {
        printf("%c",CValue+32);
    }
    else if(CValue>='a' && CValue<='z')
    {
        printf("%c",CValue-32);
    }
}

int main()
{
    char cValue='\0';
    printf("\nENter a character: ");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}