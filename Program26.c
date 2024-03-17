//Maximum between three numbers

#include<stdio.h>

int Maximum(int inum1,int inum2,int inum3)
{
    if((inum1>=inum2) && (inum1>=inum3))
    {
        return inum1;
    }
    else if((inum2>=inum1) && (inum2>=inum3))
    {
        return inum2;
    }
    else
    {
        return inum3;
    }
}

int main()
{
    auto int iValue1=0,iValue2=0,iValue3=0;
    auto int iRet=0;
    printf("\nEnter the 1st number: ");
    scanf("%d",&iValue1);
    printf("\nEnter the 2nd number: ");
    scanf("%d",&iValue2);
    printf("\nEnter the 3rd number: ");
    scanf("%d",&iValue3);

    iRet=Maximum(iValue1,iValue2,iValue3);
    printf("\nTHe largest of three numbers is %d",iRet);


    return 0;
}