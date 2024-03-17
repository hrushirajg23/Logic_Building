#include<stdio.h>

void Display(char str[])
{
    printf("String is %s",str);
}

int main()
{
    char Arr[20];

    printf("\nEnter the string: ");
    scanf("%[^'\n']s",Arr);  

    Display(Arr);

    
    return 0;
}