/*
Write a prograam which accepts string from user and check whether it contains vowel or not

*/

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    bool bFlag=false;
    while(*str!='\0')
    {
        if(*str=='a' ||*str=='A' ||*str=='e' ||*str=='E' ||*str=='i' ||*str=='I' ||*str=='o' ||*str=='O' ||*str=='u' ||*str=='U' )
        {
            bFlag=true;
        }
        
        str++;
    }
    return bFlag;
}
int main()
{
    char arr[20];
    bool bRet=false;

    printf("\nEnter string");
    scanf("%[^'\n']s",arr);

    bRet=ChkVowel(arr);

    if(bRet==true)
    {
        printf("\nContains vowel");
    }
    else
    {
        printf("\nThere is no Vowel");
    }




    return 0;
}