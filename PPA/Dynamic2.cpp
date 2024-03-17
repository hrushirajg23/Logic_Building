#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j,k;
        Demo()
        {
            cout<<"Inside constructor"<<endl;
        }
        ~Demo()
        {
            cout<<"Inside destructor"<<endl;
        }
        void display()
        {
            cout<<"Inside display"<<endl;
        }


};

int main()
{
    Demo obj1;
    obj1.display();

    Demo *ptr = new Demo ;  //allocating memory for Demo object 
    //Demo *ptr=(Demo *)malloc(sizeof(Demo));   // using malloc 


    ptr->display();

    

    

    delete ptr;
    //free(ptr);
    return 0;
}