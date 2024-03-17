#include<iostream>
using namespace std;


//if class is generic then all of its functions are by default generic

template<class T>

class Arithematic
{
    public:
        T No1;
        T No2;

        Arithematic(T A, T B);
        T Addition();
        T Substraction();
};

template<class T>
Arithematic<T> :: Arithematic(T A, T B)    //<T> tells that class is generic
{
    this->No1 = A;
    this->No2 = B;
}

template<class T>

T Arithematic<T> :: Addition()
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

template<class T>

T Arithematic<T> :: Substraction()
{
    T Ans;
    Ans = No1 - No2;
    return Ans;
}

int main()
{
    Arithematic<int> obj1(11,10);  //<int>  replaces <T>
    int Ret = 0;

    Ret = obj1.Addition();
    cout<<"Addition is : "<<Ret<<"\n";

    Ret = obj1.Substraction();
    cout<<"Substraction is : "<<Ret<<"\n";


    Arithematic<float> obj2(11.8,10.9);  //<float>  replaces <T>
    float fRet = 0;

    fRet = obj2.Addition();
    cout<<"Addition is : "<<fRet<<"\n";

    fRet = obj2.Substraction();
    cout<<"Substraction is : "<<fRet<<"\n";
    
    return 0;
}