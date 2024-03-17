#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;
        Demo(int a=10,int b=20)
        {
            i=a;
            j=b;
        }
};


//return value  keyword  +(demo obj1,demo obj2)
    Demo        operator +(Demo op1,Demo op2)
    {
        cout<<"Inside operator overloaded function"<<endl;
        return Demo(op1.i+op2.i,op1.j+op2.j);
        // 

    }

int main()
{
    Demo obj1(11,21);
    Demo obj2(5,6);
    Demo obj(0,0);
    obj=obj1+obj2;
    //obj= +(obj1,obj2)   //'+' is name of function

    cout<<"Result is:"<<endl;
    cout<<obj.i<<endl;
    cout<<obj.j<<endl;

    
    return 0;
}