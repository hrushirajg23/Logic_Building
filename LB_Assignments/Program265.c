/*
Write a recursive program to display the following
Input: 6
Output: a b c d e f
*/

#include<stdio.h>

void Display(int iNo)
{
    static char ch='a';
    if(iNo!=0)
    {
        printf("%c\t",ch);  
        ch++;
        Display(iNo-1);
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