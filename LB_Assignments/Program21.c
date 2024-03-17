//Write a program which accepts name from user and prints that name
#include<stdio.h>

int main()
{   
    char name[30];
    printf("\nPlease Enter Full Name:");
    scanf("%s",name);
    printf("Your name is %s",name);

    return 0;
}