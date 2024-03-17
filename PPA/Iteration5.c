//Do-while

#include<stdio.h>

int main()
{
    int i=1,num=0;
    printf("\nEnter the number of times you want to display the output: ");
    scanf("%d",&num);
    do
    {
        printf("\nJay Ganesh...");
        i++;
    }
    while(i<=num);
    return 0;
}