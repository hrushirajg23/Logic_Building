#include<iostream>
using namespace std;

class Demo      //parent class
{
    public:
        int x,y;

        Demo()
        {
            cout<<"Inside Demo constructor "<<endl;
            x=10;
            y=20;
        }
        ~Demo()
        {
            cout<<"Inside DEmo desctructor "<<endl;
        }
        void fun()
        {
            cout<<"Inside fun of Demo "<<endl;
        }

};

class Hello:public Demo        //child class
{
    public:
        int a,b,c;

        Hello()
        {
            a=30;
            b=40;
            c=50;
            cout<<"Inside Hello constructor "<<endl;
        }
        ~Hello()
        {
            cout<<"Inside Hello destructor "<<endl;
        }
        void gun()
        {
            cout<<"Inside gun of hello "<<endl;
        }
};

int main()
{
    Hello hobj;
    cout<<"Size of hello object is :"<<sizeof(hobj)<<endl;  //20

    cout<<hobj.x<<endl;
    cout<<hobj.y<<endl;
    cout<<hobj.a<<endl;
    cout<<hobj.b<<endl;
    cout<<hobj.c<<endl;

    hobj.fun();
    hobj.gun();
    return 0;
}