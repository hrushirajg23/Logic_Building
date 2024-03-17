//Accept string from user and and replace one character by another character

#include<stdio.h>

void Replace(char *str)
{
    while(*str!='\0')
    {
        if(*str=='a')  
        {
            *str='_';  //replace 'a' by 'underscore'
        }
        str++;
    }
    
}
int main()
{
    char Arr[10];

    printf("\nEnter the string: ");
    scanf("%[^'\n']s",Arr);  

    Replace(Arr);  

    printf("\nUpdated string is %s",Arr);

    return 0;
}