//generic 
#include<iostream>
using namespace std;

template<class T>

void Swap(T &No1,T &No2) //call by reference 
{
    T Temp; //temp is not initialised karan we don't know if it is float , int , double mhanje we don't know if it is 0 or 0.0 or 0.00000
    Temp=No1;
    No1=No2;
    No2=Temp;
}

int main()
{
    double iValue1=10.05,iValue2=20.04;

    cout<<"Value of iValue1: "<<iValue1<<endl;
    cout<<"Value of iValue2: "<<iValue2<<endl;

    Swap(iValue1,iValue2);

    cout<<"Value of iValue1: "<<iValue1<<endl;
    cout<<"Value of iValue2: "<<iValue2<<endl;

    return 0;
}