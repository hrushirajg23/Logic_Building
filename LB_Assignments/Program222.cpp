//Write a generic program to accept n numbers from users and count frequency of any specific value

#include<iostream>
using namespace std;

template<class T>

int Frequency(T *Arr,T no,int size)
{
    int iCnt=0;
    int count=0;
    for(iCnt=0;iCnt<size;iCnt++)
    {
        if(Arr[iCnt]==no)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet=0;
    iRet=Frequency(arr,10,9);
    printf("%d",iRet);
    return 0;
}