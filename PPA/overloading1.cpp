#include<iostream>
using namespace std;

class Demo
{ 
    public:
        //address of func1 1000
        int addition(int a,int b)
        {
            int ans=0;
            ans=a+b;
            return ans;
        }
        //address of func2 2000
        int addition(int a,int b,int c)
        {
            int ans=0;
            ans=a+b+c;
            return ans;
        }
        //address of func3 3000
        float addition(float a,float b)
        {
            float ans=0.0f;
            ans=a+b;
            return ans;
        }
};

int main()
{
    Demo obj;

    int i=10,j=20,k=30;

    int ret=0;
    float p=90.0,q=80.0,fret=0.0;
    fret=obj.addition(p,q);  //CALL 3000
    cout<<"The addition is :"<<fret<<endl;


    ret=obj.addition(i,j);   //CALL 1000
    cout<<"The addition is :"<<ret<<endl;
    ret=obj.addition(i,j,k);  //CALL 2000
    cout<<"The addition is :"<<ret<<endl;
    p=obj.addition(i,j);
    
    
    return 0;
}