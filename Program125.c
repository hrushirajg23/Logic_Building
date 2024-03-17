#include<stdio.h>

int main()
{
    char Arr[20];

    printf("\nEnter the string: ");
    scanf("%[^'\n']s",Arr);  //joparyant \n(enter dabat nahi)  //'^' stands for nahi(not) //[] => stands for array as we take multiple characters

    printf("\nEnter string is :%s",Arr);
    return 0;
}