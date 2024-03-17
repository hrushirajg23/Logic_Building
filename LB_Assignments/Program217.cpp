//211-215 written in one file


//generic program to find largest from 3 numbers
#include<iostream>
using namespace std;

template<class T>
T Max(T no1,T no2,T no3)
{
    T ans;
    if(no1>=no2 && no1>=no3)
    {
        ans=no1;
    }
    else if(no2>=no1 &&  no2>=no3)
    {
        ans=no2;
    }
    else
    {
        ans=no3;
    }
    return ans;


}

int main()
{
    int iRet=Max(100,200,30);
    printf("%d\n",iRet);

    float fRet=Max(100.0f,200.0f,30.0f);
    printf("%f\n",fRet);

    return 0;
}