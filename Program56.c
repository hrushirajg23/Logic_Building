//Programming based on digits
//

#include<stdio.h>

void display(int iNo)
{
    int iDigit=0;

    //Joparyant iNo 0 hoat nahi toparyant
    while(iNo!=0)       //we can also use while(iNo>0)
    {
        printf("\n--------------------------------");
        iDigit=iNo%10;
        printf("\nDigit is %d",iDigit);
        iNo=iNo/10;
        printf("\nNumber is %d",iNo);
    }
}

int main()
{
    int iValue=0;
    printf("\nENter a number: ");
    scanf("%d",&iValue);

    display(iValue);

    return 0;
}