//Programming based on digits
//

#include<stdio.h>

void display(int iNo)
{
    
    printf("\n---------------------------------");
    printf("\nValue of iNo is %d",iNo);
    int  iDigit=0;

    
    printf("\n---------------------------------");
    iDigit=iNo%10;
    printf("\nDigit is %d",iDigit);  //1
    iNo=iNo/10;             //72
    printf("\nValue of iNo is %d",iNo);

    printf("\n---------------------------------");

    iDigit=iNo%10;
    printf("\nDigit is %d",iDigit);  //2
    iNo=iNo/10;             //7
    printf("\nValue of iNo is %d",iNo);

    printf("\n---------------------------------");
    
    iDigit=iNo%10;
    printf("\nDigit is%d",iDigit);  //7
    iNo=iNo/10;             //0
    printf("\nValue of iNo is %d",iNo);

    printf("\n---------------------------------");
}

int main()
{
    int iValue=721;
    // printf("\nENter a number: ");
    // scanf("%d",&iValue);

    display(iValue);

    return 0;
}