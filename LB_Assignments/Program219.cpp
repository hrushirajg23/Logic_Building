//Write a generic prograam to accept N values from user and return largest of that values

#include<iostream>
using namespace std;

template<class T>

T Max(T *arr,int isize)
{
    T max=0;
    int iCnt=0;
    if(isize==0)
    {
        return 0;
    }
    max=arr[0];  //pahila shirt
    for(iCnt=0;iCnt<isize;iCnt++)
    {
        if(arr[iCnt]>max)
        {
            max=arr[iCnt];
        }
    }
    return max;
}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={10.0,3.7,9.8,8.7};

    int iMax=Max(arr,5);
    printf("%d\n",iMax);

    float fMax=Max(brr,4);
    printf("%f\n",fMax);
    return 0;
}