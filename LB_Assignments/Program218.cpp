//Write a generic prograam to accept N values from user and return addition of that values

#include<iostream>
using namespace std;

template<class T>

T addition(T *arr,int isize)
{
    T sum=0;
    int iCnt=0;
    if(isize==0)
    {
        return 0;
    }

    for(iCnt=0;iCnt<isize;iCnt++)
    {
        sum=sum+arr[iCnt];
    }
    return sum;
}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={10.0,3.7,9.8,8.7};

    int iSum=addition(arr,5);
    printf("%d\n",iSum);

    float fSum=addition(brr,5);
    printf("%f\n",fSum);
    return 0;
}