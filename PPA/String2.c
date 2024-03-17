#include<stdio.h>

int main()
{

    char Arr[40];
    printf("\nEnter your name: ");
    scanf("%[^'\n']s",Arr);   // '\n' yet nahi toparyant scan karaycha input

    printf("\nYour name is : %s",Arr);

    return 0;
}