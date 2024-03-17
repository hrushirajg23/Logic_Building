//Pattern Printing

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

    Pattern pobj(iValue1,iValue2);

    pobj.Display();

    return 0;
}


