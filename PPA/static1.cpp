#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;

        // Demo()
        // {
        //    cout<<"Inside default"<<endl;
        // }

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

int main()
{
    Demo obj1;
    obj1.display();

    Demo obj2(11);
    obj2.display();

    Demo obj3(51,101);
    obj3.display();

    return 0;
}