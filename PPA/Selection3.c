#include<stdio.h>

int main()
{
    int std=0;
    printf("\nPrimary School portal\n ");
    printf("\nEnter your Standard: ");
    scanf("%d",&std);
    switch(std)
    {
        case 1:
        {
            printf("\nYour exam is at 1pm");
            break;
        }
        case 2:
        {
            printf("\nYour exam is at 2pm");
            break;
        }
        case 3:
        {
            printf("\nYour exam is at 3pm");
            break;
        }
        case 4:
        {
            printf("\nYour exam is at 4pm");
            break;
        }
        default:
        {
            printf("\nInvalid case");
            break;
        }
    }
}