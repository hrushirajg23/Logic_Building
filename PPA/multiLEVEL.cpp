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


class Hello:public Demo        //derived from demo
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


class Marvellous:public Hello   //derived from hello
{
    public:
        int p;

        Marvellous()
        {
            cout<<"Inside construcctor of Marvellous "<<endl;
            p=60;
        }
        ~Marvellous()
        {
            cout<<"Marvellous Destructor "<<endl;
        }

        void sun()
        {
            cout<<"Inside sun of Marvellous "<<endl;
        }


};
int main()
{
    Marvellous mobj;
    cout<<"Size of object is :"<<sizeof(mobj)<<"bytes"<<endl;  //24

    cout<<mobj.x<<endl;
    cout<<mobj.y<<endl;
    cout<<mobj.a<<endl;
    cout<<mobj.b<<endl;
    cout<<mobj.c<<endl;
    cout<<mobj.p<<endl;

    mobj.fun();
    mobj.gun();
    mobj.sun();
    return 0;
}