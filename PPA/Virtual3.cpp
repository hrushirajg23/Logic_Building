#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;

        void fun()
        {
            cout<<"Inside Base fun\n";
        }
        void gun()
        {
            cout<<"Inside base gun\n";
        }
        void Sun()
        {
            cout<<"Inside Base Sun\n";
        }
        void Run()
        {
            cout<<"Inside Base Run\n";
        }

};

class Derived:public Base   //Base class derived class madhye inherit kela
{
    public:
        int a,b;

        void gun()  //Redefinition
        {
            cout<<"Inside derived gun\n";
        }
        void Run()  //Redefinition
        {
            cout<<"Inside derived Run\n";
        }

};

int main()
{
//  12 size bytes cha Base pointer 20 Bytes chya Derived class cha address store karto
            //DErived ha heap var allocate hoto
    Base *bp=new Derived;   //UP CASTING
    bp->fun();  
    bp->gun();    /*Expected is bp jyala point kartoy i.e(Derived cha obj) in heap,
                    tyacha  function call vhavha but 
                    te hoat nahi ani base class cha pointer type aslya
                    mule to base class cha gun() function call karto. 
                    Same in case of redefined function run() */
    bp->Sun();
    bp->Run();
    
    
    return 0;
}