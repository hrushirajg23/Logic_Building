#include<iostream>
using namespace std;


class Array
{
    private:
        int *Arr;
        int iLength;

    public:
        Array(int iSize)
        {             //Constructors are used to initialise characteristics and allocate memory for resources
            iLength=iSize;
            Arr=new int[iLength]; //Here array is the resource
        }
        ~Array()
        {
            delete []Arr;
        }

        void accept()
        {
            int iCnt=0;
            cout<<"Enter the elements: "<<endl;
            for(iCnt=0;iCnt<iLength;iCnt++)
            {
                cin>>Arr[iCnt];  //&(*(Arr+iCnt))
            }
        }

        void display()
        {
            int iCnt=0;
            cout<<"Elements of the array are: "<<endl;
            for(iCnt=0;iCnt<iLength;iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";  //*(Arr+iCnt)
            }
            cout<<endl;

        }
};

int main()
{
    Array aobj(5);
    aobj.accept();
    aobj.display();
    Array aobj2(12);
    return 0;
}