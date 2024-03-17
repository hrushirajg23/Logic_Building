//Write a generic program to accept N values and reverse the contents

#include<iostream>
using namespace std;

template<class T>
void Reverse(T *Arr,int isize)
{

    T temp;
    int iStart=0;
    int iEnd=isize-1;

    while(iEnd>=iStart)
    {
        temp=Arr[iStart];
        Arr[iStart]=Arr[iEnd];
        Arr[iEnd]=temp;

        iEnd--;
        iStart++;
    }
    cout<<"\n";

}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iCnt=0;

    for(iCnt=0;iCnt<9;iCnt++)
    {
        cout<<arr[iCnt]<<"\t";
    }

    Reverse(arr,9);
    for(iCnt=0;iCnt<9;iCnt++)
    {
        cout<<arr[iCnt]<<"\t";
    }
    return 0;
}