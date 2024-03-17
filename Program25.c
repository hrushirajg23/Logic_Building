//probelm : accept 3 numbers and return average

#include<stdio.h>

float averageofThree(int iValue1,int iValue2,int iValue3)
{
    auto float faverage=0.0f;
    faverage=((float)(iValue1+iValue2+iValue3))/3;
    return faverage;
}

int main()

{
    auto int inum1=0,inum2=0,inum3=0;
    auto float fRet=0.0f;

    printf("\nENter the first numbeer: ");
    scanf("%d",&inum1);
    printf("\nENter the second numbeer: ");
    scanf("%d",&inum2);
    printf("\nENter the third numbeer: ");
    scanf("%d",&inum3);

    fRet=averageofThree(inum1,inum2,inum3);

    printf("\nThe average of three numbers is %f",fRet);
    return 0;
}