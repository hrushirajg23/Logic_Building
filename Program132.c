//Accept string from user and   calculate number of small characters in that string

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt=0;
    while(*str !='\0')
    {
        if((*str>='a') && (*str<='z'))
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

    int iRet=CountSmall(Arr);  

    printf("\nCount of Small characters  is : %d",iRet);

    
    return 0;
}