//count even elements of array
#include<stdio.h>

int EvenCountR(int *Arr,int iSize)     //recursive
{
      static int iCnt=0,iEven=0;
      if(iCnt<iSize)
      {
            if(Arr[iCnt]%2==0)
            {
                  iEven++;
            }
            iCnt++;
            EvenCountR(Arr,iSize);
      }
      return iEven;
}

int main()
{
      int iRet=0;
    int Arr[5]={11,20,31,40,51};
    iRet=EvenCountR(Arr,5);
    printf("%d\n",iRet);
    return 0;
}