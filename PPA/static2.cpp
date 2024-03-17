#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        static int k;

    
        Demo(int a =10,int b=20)
        {
            i=a;
            j=b;
        }

        void display(){
            cout<<"Value of i: "<<i<<endl;
            cout<<"Value of j: "<<j<<endl;
        }

};

int Demo::k=111;    //initialising static variable

int main()
{
    cout<<"Value of K is : "<<Demo::k<<endl;
    Demo obj1(11,21);
    Demo obj2(51,101);
    Demo obj3(121,151);
    
    cout<<"Size of object is : "<<sizeof(obj1)<<endl;
    obj1.display();

    obj2.display();
    
    obj3.display();

    return 0;
}