//Problems on strings
#include<iostream>
using namespace std;

class String
{
    private:
        char *str;
        int iSize;

    public:
        String()  //Default constructor : gets called is user doesn't mention size
        {
            iSize=20;
            str=new char[20];
        }
        //String(String *this,int X)
        String(int X)// Parameterized constructor: gets called if user enter the size
        {
            iSize=X;
            str=new char[iSize];
        } 

        ~String()
        {
            delete []str;
        }

        //Accept(String *this)    
        void accept()
        {
            cout<<"Enter the string"<<endl;
            cin.getline(str,iSize);
        }

        void display()
        {
            cout<<"String is :"<<endl;
            cout<<str;
        }

        //Logic
};

int main()
{
    String sobj(30);
    sobj.accept();
    sobj.display();
    return 0;
}