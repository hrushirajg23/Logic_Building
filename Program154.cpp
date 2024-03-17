
//C++ Object Oriented template for pattern printing programs
#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow,iCol;
    public:
        Pattern(int X,int Y)
        {
            iRow=X;
            iCol=Y;
        }

        void Display()
        {
            //Logic
        }
};


int main()
{
    int iValue1=0,iValue2=0;

    cout<<"ENter number of rows"<<endl;
    cin>>iValue1;
    cout<<"ENter number of columns"<<endl;
    cin>>iValue2;

    Pattern *pobj =new Pattern(iValue1,iValue2);  //Pattern internally acts like malloc and return address which we catch in *pobj

    pobj->Display();

    delete pobj; //freeing memory after use

    return 0;
}


