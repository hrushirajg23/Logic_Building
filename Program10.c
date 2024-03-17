//problem: accept one number from user and return its cube

/*
    Start
    Stop
*/

#include<stdio.h>

long int calculateCUBE(int iValue)
{
    auto long int iCube=0;
    iCube=iValue*iValue*iValue;
    return iCube;
}

int main()
{
    auto int inum=0;
    auto long int iresult=0;

    printf("\nEnter the number: ");
    scanf("%d",&inum);

    iresult=calculateCUBE(inum);
    printf("\nCube of the number is %ld",iresult);

    return 0;
}