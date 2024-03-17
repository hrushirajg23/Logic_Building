//Write a generic prograam to accept N values from user and return minimum of that values

#include<iostream>
using namespace std;

template<class T>

T Min(T *arr,int isize)
{
    T min=0;
    int iCnt=0;
    if(isize==0)
    {
        return 0;
    }
    min=arr[0];  //pahila shirt
    for(iCnt=0;iCnt<isize;iCnt++)
    {
        if(arr[iCnt]<min)
        {
            min=arr[iCnt];
        }
    }
    return min;
}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={10.0,3.7,9.8,8.7};

    int iMin=Min(arr,5);
    printf("%d\n",iMin);

    float fMin=Min(brr,4);
    printf("%f\n",fMin);
    return 0;
}