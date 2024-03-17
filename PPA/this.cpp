#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j,k;

        //Demo(Demo *this,int a=10,int b=20,int c=30)
        Demo(int a=10,int b=20,int c=30) //Parameterized constructor with default arguments
        {
            cout<<"Value of this is :"<<this<<endl;
            this->i=a;
            this->j=b;
            this->k=c;
        }

        //void fun(Demo *this,int no1,int no2)
        void fun(int no1,int no2)
        {
            cout<<"\nInside fun"<<endl;
            cout<<"Value of i is : "<<this->i<<endl;
            cout<<"Value of j is : "<<this->j<<endl;
            cout<<"Value of k is : "<<this->k<<endl;
        }

        //display(Demo *this)
        void display()
        {
            cout<<"Inside display"<<endl;
            cout<<"Value of this pointer is "<<this<<endl;
        }

};

int main()
{
    Demo obj1;
    Demo obj2(11,21,51);

    obj1.fun(5,6);   //fun(&obj1,5,6)
                     //fun(100,5,6)

    obj2.fun(8,9);   //fun(&obj2,5,6)
                     //fun(200,5,6)

    cout<<endl<<endl;

    cout<<"Address of obj1 is "<<&obj1<<endl;
    obj1.display();  //display(&obj1)
                    //display(100)

    cout<<endl<<endl;

    cout<<"Address of obj2 is "<<&obj2<<endl;
    obj2.display(); //display(&obj2)
                    //display(200)
    
    
    return 0;
}