//Accept a number from user and display below pattern

/*
Input: 5
Output: A B C D E
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;
    char ch='\0';
    
    for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c\t",ch);
    }
}

int main()
{
    int iValue=0;
    printf("\nENter the number of values\t");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}