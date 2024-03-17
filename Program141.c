//Accept string from user in capitalcase and convert it to lowercase

#include<stdio.h>

void strlwrX(char *str)
{
    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
            *str=*str+32;
        }
        str++;
    }
    
    
}
int main()
{
    char Arr[10];

    printf("\nEnter the string: ");
    scanf("%[^'\n']s",Arr);  

    strlwrX(Arr);  

    printf("\nUpdated string is %s",Arr);

    return 0;
}