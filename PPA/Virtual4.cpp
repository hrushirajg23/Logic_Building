#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;

        virtual void fun()   //1000
        {
            cout<<"Inside Base fun\n";
        }
        virtual void gun()   //2000
        {
            cout<<"Inside base gun\n";
        }
        void Sun()  //3000
        {
            cout<<"Inside Base Sun\n";
        }
        void Run()  //4000
        {
            cout<<"Inside Base Run\n";
        }
};

class Derived:public Base
{
    public:
        int a,b;

        virtual void gun()  //5000            //Redefinition
        {
            cout<<"Inside derived gun\n";
        }
        void Run()  //6000                    //Redefinition
        {
            cout<<"Inside derived Run\n";
        }
        virtual void Mun()  //7000                    
        {
            cout<<"Inside derived Mun\n";
        }

};

int main()
{
    cout<<sizeof(Base)<<endl;   //12
    cout<<sizeof(Derived)<<endl;    //20
    Base *bp=new Derived;   //UP CASTING
    bp->fun();
    bp->gun();
    bp->Sun();
    bp->Run();
    
    
    return 0;
}