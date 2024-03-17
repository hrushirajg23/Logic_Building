#include<stdio.h>

void display(int *Arr,int iSize)     //recursive
{
      static int iCnt=0;
      if(iCnt<iSize)
      {
            printf("%d\t",Arr[iCnt]);
            iCnt++;
            display(Arr,iSize);
            
      }
}

int main()
{
    int Arr[5]={10,20,30,40,50};
    display(Arr,5);
    return 0;
}