//Accept string from user and calculate number of characters in that string

#include<stdio.h>

int strlenX(char *str)
{
    int iCnt=0;
    while(*str !='\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];

    printf("\nEnter the string: ");
    scanf("%[^'\n']s",Arr);  

    int iRet=strlenX(Arr);  //strlenX(100)

    printf("Length of string is : %d",iRet);

    
    return 0;
}