#include<iostream>
using namespace std;

int Addition(int No1,int No2)
{
    int Ans=0;
    Ans=No1+No2;
    return Ans;
}

int main()
{
    int iValue=10,iValue2=11,iRet=0;
    iRet=Addition(iValue,iValue2);
    cout<<"Addition is: "<<iRet<<endl;

    return 0;
}