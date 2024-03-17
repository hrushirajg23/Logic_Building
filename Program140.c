//Accept string from user and and replace vowels by underscore

#include<stdio.h>

void ReplaceVowels(char *str)
{
    while(*str!='\0')
    {
        if(*str=='A' || *str=='E' || *str=='I' || *str=='O'|| *str=='U' || *str=='a' || *str=='e' || *str=='i' || *str=='o'|| *str=='u')    
        {
            *str='_';  //ReplaceVowels 'a' by 'underscore'
        }
        str++;
    }
    
}
int main()
{
    char Arr[10];

    printf("\nEnter the string: ");
    scanf("%[^'\n']s",Arr);  

    ReplaceVowels(Arr);  

    printf("\nUpdated string is %s",Arr);

    return 0;
}