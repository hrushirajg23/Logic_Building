//Linear Search

//WorstCase Time Complexity: 0(n)
//BestCase Time Complexity: 0(1)
#include<iostream>
using namespace std;

class Array
{
    private:
        int * Arr;
        int iSize;

    public:
        Array(int X)        // Parametrised Constructor
        {
            iSize = X;
            Arr = new int[iSize];
        }

        ~Array()            // Destructor
        {   
            delete []Arr;
        }

        void Accept()       // Member function
        {
            int iCnt = 0;
            cout<<"Please enter the elements : "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()      // Member function
        {
            cout<<"Elements of the array are : "<<endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }

        bool LinearSearch(int iNo)
        {
            bool bFlag=false;
            int iCnt=0;
            for(iCnt=0;iCnt<this->iSize;iCnt++)
            {
                if(iNo==this->Arr[iCnt])
                {
                    bFlag=true;
                    break;
                }
            }
            return bFlag;
        }
};  // End of class

int main()
{
    int iLength = 0;
    int iRet = 0,iValue=0;
    bool bRet=false;

    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

    cout<<"Enter the element that you want to search"<<endl;
    cin>>iValue;

    bRet=aobj->LinearSearch(iValue);

    if(bRet==true)
    {
        cout<<"Element is present"<<endl;   
    }
    else
    {
        cout<<"Element is absent"<<endl;
    }
    delete aobj;

    return 0;
}