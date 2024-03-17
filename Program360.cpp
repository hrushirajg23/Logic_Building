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
    double dValue=10.9,dValue2=11.6,dRet=0.0;
    int iValue=10,iValue2=11,iRet=0;
    float fValue=18.9,fValue2=15.6,fRet=0.0;
    dRet=Addition(dValue,dValue2);
    cout<<"Addition is: "<<dRet<<endl;

    iRet=Addition(iValue,iValue2);
    cout<<"Addition is: "<<iRet<<endl;

    fRet=Addition(fValue,fValue2);
    cout<<"Addition is: "<<fRet<<endl;

    return 0;
}