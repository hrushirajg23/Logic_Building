#include<iostream>
using namespace std;

class Demo
{
    int i;      //by default considered private if not written under any access specifier
    public:
        int j;
    private:
        int k;
    protected:
        int a;

    public:
        Demo()
        {
            i=10;
            j=20;
            k=30;
            a=40;
        }
        void Display()
        {
            cout<<"Value of i: "<<i<<endl;  //A
            cout<<"Value of j: "<<j<<endl;  //A
            cout<<"Value of k: "<<k<<endl;  //A
            cout<<"Value of a: "<<a<<endl;  //A
        }

};

class Hello:public Demo
{
    public: 
        void HelloDisplay()
        {
            //cout<<"Value of i: "<<i<<endl;  //NA
            cout<<"Value of j: "<<j<<endl;  //A
            //cout<<"Value of k: "<<k<<endl;  //NA
            cout<<"Value of a: "<<a<<endl;  //A
        }
};

int main()
{
    Hello hobj;
    hobj.HelloDisplay();
    return 0;
}