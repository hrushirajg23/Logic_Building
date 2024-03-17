//sum of all elements of array
#include<stdio.h>

int Sum(int *Arr,int iSize)     //recursive
{
      int iCnt=0,iSum=0;
      while(iCnt<iSize)
      {
            iSum=iSum+Arr[iCnt];
            iCnt++;
      }
      return iSum;
}

int main()
{
      int iRet=0;
    int Arr[5]={10,20,30,40,50};
    iRet=Sum(Arr,5);printf("%d\n",iRet);
    return 0;
}