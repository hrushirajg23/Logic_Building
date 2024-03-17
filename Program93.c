
//Display Patten

//Input: 4
//Outpu: a b c d
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    char ch='a';
    for(iCnt=1;iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c\t",ch); 
    }
    printf("\n");
}

int main()
{
    int iValue=0;
    printf("\nEnter the number of times you want to display :");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}