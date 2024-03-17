#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
        public:
            Demo()       
            {   
                i=10;
                j=20;
                k=30;
            }
    friend void Display();      //now 'display' function can access private and protected members of class Demo
};

void Display()
{
    Demo obj;
    cout<<"Value of i:"<<obj.i<<endl;
    cout<<"Value of j:"<<obj.j<<endl;
    cout<<"Value of k:"<<obj.k<<endl;
}

int main()
{
    Display();
    return 0;
}