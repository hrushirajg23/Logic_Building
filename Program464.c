//sum of all elements of array
#include<stdio.h>

int SumR(int *Arr,int iSize)     //recursive
{
      static int iCnt=0,iSum=0;
      if(iCnt<iSize)
      {
            iSum=iSum+Arr[iCnt];
            iCnt++;
            SumR(Arr,iSize);
      }
      return iSum;
}

//also can use
/*
int SumR(int *Arr,int iSize)     //recursive
{
      static int iSum=0;
      if(iSize>=0)
      {
            iSum=iSum+Arr[iSize];
            SumR(Arr,iSize-1);
      }
      return iSum;
}
*/

int main()
{
      int iRet=0;
    int Arr[5]={10,20,30,40,50};
    iRet=SumR(Arr,5);printf("%d\n",iRet);
    return 0;
}