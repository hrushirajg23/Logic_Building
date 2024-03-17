//count even elements of array
#include<stdio.h>

int Count(int *Arr,int iSize)     //recursive
{
      int iCnt=0,iCount=0;
      while(iCnt<iSize)
      {
            if(Arr[iCnt]%2==0)
            {
                  iCount++;
            }
            iCnt++;
      }
      return iCount;
}

int main()
{
      int iRet=0;
    int Arr[5]={11,20,31,40,51};
    iRet=Count(Arr,5);
    printf("%d\n",iRet);
    return 0;
}