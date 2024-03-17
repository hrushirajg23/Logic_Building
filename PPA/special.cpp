#include<iostream>
using namespace std;

class Demo
{
    public:             //access specifier
        int i,j;  //characteristics

        Demo()   //default constructor
        {
            cout<<"\nInside default constructor";
            i=0;
            j=0;
        }

        Demo(int a,int b)     //parameterized constructor
        {
            cout<<"\nInside parameterized constructor";
            i=a;
            j=b;
        }

        //   Demo &ref=obj2;
        Demo(Demo &ref)     //copy constructor  
        {
            cout<<"\nInside copy constructor";
            i=ref.i;
            j=ref.j;
        }

        ~Demo()
        {
            cout<<"\nInside destructor";
        }
};

int main()
{   
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);

    return 0;
}