//Accept string from user and calculate whitespaces in string

#include<stdio.h>

int CountSpace(char *str)
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
    char Arr[10];

    printf("\nEnter the string: ");
    scanf("%[^'\n']s",Arr);  

    int iRet=CountSpace(Arr);  

    printf("\nCount of Space   is : %d",iRet);

    return 0;
}