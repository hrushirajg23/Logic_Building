#include<iostream>
using namespace std;

class Demo      
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

class Hello        
{
    public:
        int a,b;
        Hello()
        {
            a=30;
            b=40;
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

//class Marvellous: public Demo,public Hello  
class Marvellous: public Hello,public Demo   //derived from Demo and Hello   
{
    public:
        int p;

        Marvellous()
        {
            cout<<"Inside Marvellous Constructor "<<endl;
            p=60;
        }
        ~Marvellous()
        {
            cout<<"Inside Marvellous Destructor "<<endl;
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

    mobj.fun();
    mobj.gun();
    mobj.sun();
    return 0;
}