//generic 
#include<iostream>
using namespace std;


void Swap(float &No1,float &No2) //call by reference 
{
    float Temp;
    Temp=No1;
    No1=No2;
    No2=Temp;
}

int main()
{
    float iValue1=10.05,iValue2=20.04;

    cout<<"Value of iValue1: "<<iValue1<<endl;
    cout<<"Value of iValue2: "<<iValue2<<endl;

    Swap(iValue1,iValue2);

    cout<<"Value of iValue1: "<<iValue1<<endl;
    cout<<"Value of iValue2: "<<iValue2<<endl;

    return 0;
}