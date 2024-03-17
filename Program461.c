#include<stdio.h>

void display(int *Arr,int iSize)     //recursive
{
      int iCnt=0;

      while(iCnt<iSize)
      {
            printf("%d\t",Arr[iCnt]);
            iCnt++;
      }
    
}

int main()
{
    int Arr[5]={10,20,30,40,50};
    display(Arr,5);
    return 0;
}