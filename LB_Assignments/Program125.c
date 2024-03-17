/*
Accept character from user and display its ASCII value in decimal, octal and hexamdecimal format
*/
 #include<stdio.h>
 #include<stdbool.h>



void Display(char ch)
{
    printf(" Decimal: %d\n Octal: %o\n Hexamdecimal: %x",ch,ch,ch);
}
int main()
{
    char cValue='\0';
    printf("\nEnter a character : ");
    scanf("%c",&cValue);

    Display(cValue);

    
    return 0;
}