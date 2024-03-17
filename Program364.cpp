//generic 
#include<iostream>
using namespace std;


void Swap(double &No1,double &No2) //call by reference 
{
    double Temp;
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