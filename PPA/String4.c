#include<stdio.h>

int CalculateLength(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        iCnt++; 
        str++; //shift pointer to next character
    }
    return iCnt;
}


int main()
{

    char Arr[40];
    int iRet=0;
    printf("\nEnter your name: ");
    scanf("%[^'\n']s",Arr);   // '\n' yet nahi toparyant scan karaycha input

    printf("\nYour name is : %s",Arr);

    iRet=CalculateLength(Arr);

    printf("\nLength of string is %d",iRet);
    return 0;
}