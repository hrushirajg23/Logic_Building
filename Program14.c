//Problem : Take a number from user and check if it is even or odd

//tip:jevha question madhe "check whether "asta tevha apan "bool" vaparto

/*Algorithm

    Start
        Accept number from user
        divide that number by 2
        if remainder is 0 then display even
        otherwise display odd
    stop

*/


#include<stdio.h>
#include<stdbool.h>

bool Checkeven(int inum)
{
    if((inum%2)==0)
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
    auto int iValue=0;
    auto bool bRet=false;

    printf("\nEnter the number: ");
    scanf("%d",&iValue);

    bRet=Checkeven(iValue);

    if(bRet==true)
    {
        printf("%d is an even number ",iValue);
    }
    else
    {
        printf("%d is and odd number ",iValue);
    }
    return 0;
}