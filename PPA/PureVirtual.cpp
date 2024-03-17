#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;
    
        void fun()//1000      //Concrete Method
        {
            cout<<"Base fun\n";
        }
        virtual void gun()//2000     //Concrete Method
        {
            cout<<"Base gun\n";
        }
        virtual int Addition(int no1,int no2)=0;  //Abstract Method

};

class Derived:public Base
{
    public:
        int a,b;
        
        void gun()//3000                  //Concrete Method
        {
            cout<<"Derived gun\n";
        }
        virtual void sun()//4000         //Concrete Method
        {
            cout<<"DErived sun\n";
        }
        int Addition(int no1,int no2)//5000   //Concrete Method
        {
            return no1+no2;
        }
};

int main()
{
    Base bobj;
    Base *bp=new Derived;
    bp->fun();
    bp->gun();
    int Ret=0;

    Ret=bp->Addition(10,11);
    cout<<"Addition is :"<<Ret<<endl;
    return 0;
}