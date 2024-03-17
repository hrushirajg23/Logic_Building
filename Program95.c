
//Display Patten

//Input: 4
//Outpu: A B C D
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    char ch='\0';
    for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
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