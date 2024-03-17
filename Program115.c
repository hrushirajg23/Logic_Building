//Printing ASCII value of a character

#include<stdio.h>

int main()
{
    char ch='\0';
    printf("\nEnter the character: ");
    scanf("%c",&ch);

    printf("\nASCII value of the character in DECIMAL is %d",ch);
    printf("\nASCII value of the character in OCTAL is %o",ch);
    printf("\nASCII value of the character in HEXADECIMAL is %x",ch);
    return 0;
}