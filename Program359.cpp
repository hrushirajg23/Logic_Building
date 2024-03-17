//generic 
#include<iostream>
using namespace std;

template <class T>             //template header
//T is 


T Addition(T No1,T No2)
{
    T Ans=0.0;
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