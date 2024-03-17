/*Accept a character from user and 
if the character is Capital then display all characters from input character till Z
if the input character is small then display all characters in reverse order till a.
in other cases Return directly*/

 #include<stdio.h>

void Display(char ch)
{
    if(ch>='a' && ch<='z')
    {
        while(ch>='a')
        {
            printf(" %c",ch);
            ch--;
        }
    }
    else if(ch>='A' && ch<='Z')
    {
        while(ch<='Z')
        {
            printf(" %c",ch);
            ch++;
        }
    }
    else
    {
        printf("%c",ch);
    }

}
 int main()
{
    char cValue='\0';
    printf("\nEnter a character : ");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}