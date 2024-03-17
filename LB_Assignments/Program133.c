/*
Write a prograam which accepts string from user and toggle the case

*/

#include<stdio.h>

void strtoggleX(char *str)
{
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            *str=*str-32;
        }
        else if(*str>='A' && *str<='Z')
        {
            *str=*str+32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("\nEnter a string: ");
    scanf("%[^'\n']s",arr);


    strtoggleX(arr);

    printf("\nUpdated string is %s",arr);
    return 0;
}



 // int iCnt=10;
    // // for(iCnt=19;iCnt>=0;iCnt--)
    // // {
    // //     printf("%c",*(str+iCnt));
    // // }
    