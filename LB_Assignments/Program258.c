/*
Write a program which accept string from user and count small characters int it in it
Input:HElloWOrlD
Output: 5

*/

#include<stdio.h>

int Small(char *str)
{
    static int iSmall=0;

    if(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            iSmall++;
        }
        str++;
        Small(str);
    }  
    return iSmall;
}

int main()
{
    int iRet=0;

    char arr[20];


    printf("Enter String\n");
    scanf("%[^'\n']s",&arr);

    iRet=Small(arr);

    printf("Small characters in string are %d\n",iRet);
    return 0;
}


