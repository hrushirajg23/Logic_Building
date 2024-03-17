#include<iostream>
using namespace std;

double Addition(double No1,double No2)
{
    double Ans=0.0;
    Ans=No1+No2;
    return Ans;
}

int main()
{
    double iValue=10.9,iValue2=11.6,Ret=0.0;
    Ret=Addition(iValue,iValue2);
    cout<<"Addition is: "<<Ret<<endl;

    return 0;
}