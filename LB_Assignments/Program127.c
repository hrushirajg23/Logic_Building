/*
Write a prograam which accepts string from user and count number of small characters

*/

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("\nEnter string");
    scanf("%[^'\n']s",arr);

    iRet=CountSmall(arr);

    printf("\n%d",iRet);




    return 0;
}