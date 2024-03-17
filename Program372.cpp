#include<iostream>
using namespace std;


//if class is generic then all of its functions are by default generic

int Addition(int Arr[],int length)
{
    int Sum=0,iCnt=0;

    for(iCnt=0;iCnt<length;iCnt++)
    {
        Sum=Sum+Arr[iCnt];
    }
    return Sum;
}

int main()
{
    int Size=0,iCnt=0,Ret=0;
    int *ptr=NULL;

    cout<<"enter number of elements: "<<endl;
    cin>>Size;

    ptr=new int[Size];
    
    cout<<"enter the elements of array"<<endl;

    for(iCnt=0;iCnt<Size;iCnt++)
    {
        cin>>ptr[iCnt];
    }

    Ret=Addition(ptr,Size);

    cout<<"Addition of all elements is: "<<Ret<<endl;
    cout<<"Elements of array are: "<<endl;
    for(iCnt=0;iCnt<Size;iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }

    delete []ptr;
   
    return 0;
}