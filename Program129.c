//Accept string from user and calculate number occurences of ''a' in that string

#include<stdio.h>

int Counta(char *str)
{
    int iCnt=0;
    while(*str !='\0')
    {
        if(*str=='a')
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

    printf("\nEnter the string: ");
    scanf("%[^'\n']s",Arr);  

    int iRet=Counta(Arr);  //strlenX(100)

    printf("\nCount of letter 'a' is : %d",iRet);

    
    return 0;
}