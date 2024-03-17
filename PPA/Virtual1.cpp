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
    Base bobj;
    Derived dobj;

    cout<<sizeof(bobj)<<endl;  //12
    cout<<sizeof(dobj)<<endl;   //20

    bobj.fun();
    dobj.fun();
    dobj.gun();
    
    return 0;
}