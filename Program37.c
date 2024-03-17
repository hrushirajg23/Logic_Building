//dynamic loop

#include<stdio.h>

void display(int iNo)
{
    int iCnt=0;

        //1     //2       //3
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\n",iCnt);   //4  //iNo-iCnt+1
    }

}

int main()
{
    int iValue=0;
    printf("Enter Number of times you want to display Hello on screen\n");
    scanf("%d",&iValue);
    display(iValue);
}