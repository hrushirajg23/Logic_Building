//Problems on N numbers(Array): Resource allocation and deallocation inside constructor and destructor

#include<iostream>
using namespace std;

class Array
{
    private:
        int *Arr;  // same as int Arr[]
        int iSize;
    public:
        Array(int X)  //Parameterized constructor
        {
            iSize=X;
            Arr=new int[iSize];//Resource allocation 
            /*Arr points to memory allocated on heap ,the memory is of size iSize(no. of elements)*sizeof(int);
            */
        
        }
        ~Array()
        {
            delete []Arr;
        }

        void accept()
        {
            int iCnt=0;
            cout<<"Please enter the elements :"<<endl;
            for(iCnt=1;iCnt<=iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void display()
        {
            int iCnt=0;
            cout<<"Elements of array are :"<<endl;
            for(iCnt=1;iCnt<=iSize;iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }
    
};

int main()
{
    int iLength=0;

    cout<<"Enter the number of elements you want to store: "<<endl;
    cin>>iLength;

    Array aobj(iLength);

    aobj.accept();
    aobj.display();
    return 0;
}