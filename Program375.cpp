#include<iostream>
using namespace std;

class Array
{
    public:
        int *Arr;
        int iSize;
    
        Array(int length)
        {
            iSize=length;
        }
        ~Array()
        {
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the elements: "<<endl;
            int iCnt=0;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()
        {
            cout<<"Elements of array are: "<<endl;
            int iCnt=0;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cout<<Arr[iCnt];
            }
        }

};

int main()
{
    Array obj(5);

    obj.Accept();
    obj.Display();
    return 0;
}