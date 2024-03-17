//Accept string from user and   calculate number of Digits  in that string

#include<stdio.h>

int CountDigits(char *str)
{
    int iCnt=0;
    while(*str !='\0')
    {
        if(*str>='0' && *str<='9')
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
    char c='\0';    

    printf("\nEnter the string: ");
    scanf("%[^'\n']s",Arr);  

    int iRet=CountDigits(Arr);  

    printf("\nCount of Digits   is : %d",iRet);

    
    return 0;
}