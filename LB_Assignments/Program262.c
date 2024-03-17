/*
Write a recursive program to display the following
Input: 5
Output: 1 2 3 4 5
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo!=0)
    {
        Display(iNo-1);
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}