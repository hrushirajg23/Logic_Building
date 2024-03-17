#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;

        void fun()
        {
            cout<<"Inside Base fun\n";
        }

};

class Derived:public Base
{
    public:
        int a,b;

        void gun()
        {
            cout<<"Inside derived gun\n";
        }

};

int main()
{
    Base *bp1=new Base;   //NO CASTING
    Derived *dp1=new Derived;       //NO CASTING
    Base *bp2=new Derived;      //UP CASTING
    //Derived *dp2=new Base;    //DOWN CASTING
    return 0;
}