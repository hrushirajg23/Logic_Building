//Accept string from user and   calculate vowels in the string
//Case InSensitive Program: accepts capital and small input
#include<stdio.h>

int CountVowels(char *str)
{
    int iCnt=0;
    while(*str !='\0')
    {
        if(*str=='A' || *str=='E' || *str=='I' || *str=='O'|| *str=='U' || *str=='a' || *str=='e' || *str=='i' || *str=='o'|| *str=='u') 
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