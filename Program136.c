//Accept string from user and   calculate vowels in the string
//Case Sensitive Program
#include<stdio.h>

int CountVowels(char *str)
{
    int iCnt=0;
    while(*str !='\0')
    {
        if(*str=='A' || *str=='E' || *str=='I' || *str=='O'|| *str=='U')  //calculates only capital vowels
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

    int iRet=CountVowels(Arr);  

    printf("\nCount of Vowels   is : %d",iRet);

    return 0;
}