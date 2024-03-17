//Write a program which accepts string from user & count numbr of whitespaces


#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str==' ')
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

    printf("\nEnter a string: ");
    scanf("%[^'\n']s",arr);

    iRet =CountWhite(arr);
    printf("%d",iRet);
    return 0;
}