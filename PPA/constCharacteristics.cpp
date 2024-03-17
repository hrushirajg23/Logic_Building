#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;
        const  int k;

        Demo(int a, int b,int c): j(b),k(c)              //Parameterized constructor
        {
            i=a;
            //j=b;
            //k=c;
        }    
};
int main()
{   
    Demo obj(11,21,51);
    cout<<"Value of i"<<obj.i<<endl;
    cout<<"Value of j"<<obj.j<<endl;
    cout<<"VAlue of k"<<obj.k<<endl;

    obj.i++;
    obj.j++;
    obj.k++;
    
    return 0;
}