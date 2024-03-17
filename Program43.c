//accept two numbers from user and find if one number is factor of other

#include<stdio.h>
#include<stdbool.h>

bool CheckFactor(int iNumber,int ifactor)
{

    if((iNumber%ifactor)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
} 

int main()
{
    int iValue1=0,iValue2=0;
    printf("\nEnter 1st number: ");
    scanf("%d",&iValue1);
    printf("\nEnter 2nd number: ");
    scanf("%d",&iValue2);
    bool bret=false;
    bret=CheckFactor(iValue1,iValue2);

    if(bret==true)
    {
        printf("%d is a factor of %d",iValue2,iValue1);
    }
    else
    {
        printf("%d is not a factor of %d",iValue2,iValue1);
    }
    return 0;
}