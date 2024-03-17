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
};

void Display()
{
    Demo obj;
    cout<<"Value of i:"<<obj.i<<endl;
    cout<<"Value of i:"<<obj.j<<endl;
    cout<<"Value of i:"<<obj.k<<endl;
}

int main()
{
    Display();

    return 0;
}