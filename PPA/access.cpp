#include<iostream>
using namespace std;

class Demo
{
    int i;
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

int main()
{
    Demo obj;

            //cout<<"Value of i: "<<obj.i<<endl;   //NA
            cout<<"Value of j: "<<obj.j<<endl;      //A
            //cout<<"Value of k: "<<obj.k<<endl;    //NA
            //cout<<"Value of a: "<<obj.a<<endl;    //NA

    obj.Display();   //Display(&obj)

    return 0;
}