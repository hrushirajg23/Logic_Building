/*
Write a program which accept string from user and count whitespaces in it
Input:HE llo WOr lD
Output: 3

*/


#include<stdio.h>

int Whitespace(char *str)
{
    static int iWhite=0;

    if(*str!='\0')
    {
        if(*str==' ')
        {
            iWhite++;
        }
        str++;
        Whitespace(str);
    }  
    return iWhite;
}

int main()
{
    int iRet=0;

    char arr[20];


    printf("Enter String\n");
    scanf("%[^'\n']s",&arr);

    iRet=Whitespace(arr);

    printf("Whitespaces in string are %d\n",iRet);
    return 0;
}


