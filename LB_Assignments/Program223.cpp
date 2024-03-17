//Write a generic program to accept n numbers from user and search first occurence of any specific value

#include<iostream>
using namespace std;

template<class T>

int FirstOccurence(T *Arr,T no,int size)
{
    int iCnt=0;
    for(iCnt=0;iCnt<size;iCnt++)
    {
        if(Arr[iCnt]==no)
        {
            break;
        }
    }
    return iCnt+1;
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet=0;
    iRet=FirstOccurence(arr,40,9);
    printf("%d",iRet);
    return 0;
}