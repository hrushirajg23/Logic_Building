/*
Accept division of student from user 
and depending on the division display exam timing.
There are four divisions in school as A,B,C,D. Exam of division A at 7AM,
B at 8:30AM, C at 9:20 AM , D at 10:30 AM 

*/

#include<stdio.h>
#include<stdbool.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv=='A' || chDiv=='a')
    {
        printf("\nYour exam is at 7 AM");
    }
    else if(chDiv=='B' || chDiv=='b')
    {
        printf("\nYour exam is at 8:30 AM");
    }
    else if(chDiv=='C' || chDiv=='c')
    {
        printf("\nYour exam is at 9:20 AM");
    }
    else if(chDiv=='D' || chDiv=='d')
    {
        printf("\nYour exam is at 10:30 AM");
    }
}

int main()
{
    char cValue='\0';
    
    printf("\nEnter a character: ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);


    return 0;
}