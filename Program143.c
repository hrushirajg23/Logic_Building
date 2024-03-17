//Accept string from convert it to Uppercase if lowercase and to lowercase if Uppercase

#include<stdio.h>

void strToggleX(char *str)
{
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            *str=*str-32;
        }
        else if(*str>='A' && *str<='Z')      //ithe else nahi takaycha karan ma to capital sodun baki sagle characters accept karel small character sodun and tyanna -32 karel
        {
            *str=*str+32;
        }
        str++;
    }
}
int main()
{
    char Arr[20];

    printf("\nEnter the string: ");
    scanf("%[^'\n']s",Arr);  

    strToggleX(Arr);  

    printf("\nUpdated string is %s",Arr);

    return 0;
}