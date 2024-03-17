// Problem Statement : accept two values from user and perform the addition

#include <stdio.h>

int main()
{
    int i, j, k;
    printf("\nENter 1st number: ");
    scanf("%d", &i);
    printf("\nENter 2nd number: ");
    scanf("%d", &j);

    k = i + j;

    printf("\nAddition is : %d", k);

    return 0;
}