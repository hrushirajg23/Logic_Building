#include<iostream>
using namespace std;

template<class T>

T Addition(T Arr[],int length)
{
    T Sum=0;
    int iCnt=0;

    for(iCnt=0;iCnt<length;iCnt++)
    {
        Sum=Sum+Arr[iCnt];
    }
    return Sum;
}

int main()
{
    int Size=0,iCnt=0;
    float fRet=0.0;
    float *ptr=NULL;

    cout<<"enter number of elements: "<<endl;
    cin>>Size;

    ptr=new float[Size];
    
    cout<<"enter the elements of array"<<endl;

    for(iCnt=0;iCnt<Size;iCnt++)
    {
        cin>>ptr[iCnt];
    }

    fRet=Addition(ptr,Size);

    cout<<"Addition of all elements is: "<<fRet<<endl;
    cout<<"Elements of array are: "<<endl;
    for(iCnt=0;iCnt<Size;iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }

    delete []ptr;
   
    return 0;
}