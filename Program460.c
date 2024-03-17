#include<stdio.h>

void display(int *Arr,int iSize)     //recursive
{
      int iCnt=0;

      for(iCnt=0;iCnt<iSize;iCnt++)
      {
        printf("%d\t",Arr[iCnt]);
        
      }
    
}

int main()
{
    int Arr[5]={10,20,30,40,50};
    display(Arr,5);
    return 0;
}