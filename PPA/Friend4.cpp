#include <iostream>
using namespace std;

class Hello
{
    
    void fun();
    void gun();
};

class Demo
{
    public:  int i;
    private: int j;
    protected: int k;

    public:
        Demo()
        {
            i=10,j=20,k=30;
        }
    
    friend class Hello;         //whole Hello class is a friend of class Demo
    /*Mhanje Hello can access members of Demo class but Demo can't access members of Hello class*/ 
};

//Return_Value  Class_name :: Function_name()

void Hello::fun()
{
    Demo obj;
    cout<<"Value of i"<<obj.i<<endl;
    cout<<"Value of j"<<obj.j<<endl;
    cout<<"Value of k"<<obj.k<<endl;
    
}


void Hello::gun()
{
    Demo obj;
    cout<<"Value of i"<<obj.i<<endl;
    cout<<"Value of j"<<obj.j<<endl;
    cout<<"Value of k"<<obj.k<<endl;
    
}


int main()
{
    Hello hobj;
    hobj.fun();
    hobj.gun();
    return 0;
}