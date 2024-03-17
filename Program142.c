//Accept string from user in lowercase and convert it to Uppercase

#include<stdio.h>

void strUprX(char *str)
{
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            *str=*str-32;
        }
        str++;
    }
}
int main()
{
    char Arr[20];

    printf("\nEnter the string: ");
    scanf("%[^'\n']s",Arr);  

    strUprX(Arr);  

    printf("\nUpdated string is %s",Arr);

    return 0;
}