//program: using switch case

#include<stdio.h>

void DisplayExamTime(int iValue)
{
    switch (iValue)
    {
    case 1:
        printf("\nYour exam is at 8am");
        break;
    case 2:
        printf("\nYour exam is at 9am");
        break;
    case 3:
        printf("\nYour exam is at 10am");
        break;
    case 4:
        printf("\nYour exam is at 11am");
        break;
    case 5:
        printf("\nYour exam is at 12pm");
        break;    
    default:
        printf("\nWrong input ");
        break;
    }
}

int main()
{
    auto int istandard=0;
    printf("\nEnter your standard: ");
    scanf("%d",&istandard);

    DisplayExamTime(istandard);
    return 0;
}
