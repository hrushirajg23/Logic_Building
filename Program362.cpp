//generic 
#include<iostream>
using namespace std;


void Swap(int No1,int No2) //call by value
{
    int Temp;
    Temp=No1;
    No1=No2;
    No2=Temp;
}

int main()
{
    int iValue1=10,iValue2=20;

    cout<<"Value of iValue1: "<<iValue1<<endl;
    cout<<"Value of iValue2: "<<iValue2<<endl;

    Swap(iValue1,iValue2);

    cout<<"Value of iValue1: "<<iValue1<<endl;
    cout<<"Value of iValue2: "<<iValue2<<endl;

    return 0;
}