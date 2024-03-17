//running for loop dynamically by taking no of iterations from user

#include<stdio.h>

void display(int iNo)
{
    int iCnt=0;
    
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("Jay Ganesh\n");
    }
}

int main()
{
    int iValue=0;
    printf("Enter Number of times you want to display Jay ganesh on screen\n");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}