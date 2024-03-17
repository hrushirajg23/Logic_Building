//Accept string from user and calculate number of Capital characters in that string

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt=0;
    while(*str !='\0')
    {
        if(*str>='A' && *str<='Z')
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

    int iRet=CountCapital(Arr);  

    printf("\nCount of Capital characters  is : %d",iRet);

    
    return 0;
}