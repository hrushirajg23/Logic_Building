/*
Write a recursive program to display the following
Input: 6
Output: A B C D E F
*/

#include<stdio.h>

void Display(int iNo)
{
    static char ch='A';
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