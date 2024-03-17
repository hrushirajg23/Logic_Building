/*Write a program which accpet string from user and accept one character.
Return Frequency of that character
*/
#include<stdio.h>

int CountChar(char *str,char ch)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str==ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
} 


int main()
{
    char Arr[20];
    char cValue='\0';
    int iRet=0;

    printf("\nEnter the string: ");
    scanf("%[^'\n']s",Arr);

    printf("\nEnter the character: ");
    scanf(" %c",&cValue);

    iRet=CountChar(Arr,cValue);

    printf("\nCharacter Frequency is %d",iRet);
    

    return 0;
}