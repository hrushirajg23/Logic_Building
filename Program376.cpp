#include<iostream>
using namespace std;

class Array
{
    public:
        int *Arr;
        int iSize;

        Array(int length);
        ~Array();
        void Accept();
        void Display();
        
    
        
};

Array::Array(int length)
{
    iSize=length;
}
Array::~Array()
{
    delete []Arr;
}

void Array::Accept()
{
    cout<<"Enter the elements: "<<endl;
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        cin>>Arr[iCnt];
    }
}
void Array::Display()
{
    cout<<"Elements of array are: "<<endl;
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        cout<<Arr[iCnt];
    }
}


int main()
{
    Array obj(5);

    obj.Accept();
    obj.Display();
    return 0;
}