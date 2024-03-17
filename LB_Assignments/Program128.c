/*
Write a prograam which accepts string from user and return difference between frequency of small characters 
and frequency of capital characters

*/

#include<stdio.h>

int Difference(char *str)
{
    int iCntC=0;
    int iCntS=0;
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            iCntS++;
        }
        else if(*str>='A' && *str<='Z')
        {
            iCntC++;
        }
        str++;
    }
    return iCntS-iCntC;
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("\nEnter string");
    scanf("%[^'\n']s",arr);

    iRet=Difference(arr);

    printf("\n%d",iRet);




    return 0;
}