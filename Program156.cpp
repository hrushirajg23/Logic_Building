//Problems on strings
#include<iostream>
using namespace std;

class String
{
    private:
        char *str;

    public:
        String()  //Default constructor : gets called is user doesn't mention size
        {
            str=new char[20];
        }
        String(int iSize)// Parameterized constructor: gets called if user enter the size
        {
            str=new char[iSize];
        } 

        ~String()
        {
            delete []str;
        }

        void accept()
        {
            cout<<"Enter the string"<<endl;
            cin>>str;  //Problem: this cin doesn't accept input after whitespace 
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