//Binary Search
/*Jar aplyala fakt search karaychay ki element ahe ki nahi 
tar we can customize search ki iEnd and iStart madhe element asel tar bFlag=true
kar. Karan jar for eg. element End la asel tar ugach iterations hotat. To reduce that
apan direct check karaycha end la. 

*/
//WorstCase Time Complexity: 
//BestCase Time Complexity: 
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


        //Note: Array must be sorted
        bool BinarySearch(int iNo)
        {
            int iStart=0;
            int iEnd=iSize-1,iMid=0;
            bool bFlag=false;

            while(iStart<=iEnd)
            {
                iMid=iStart+(iEnd-iStart)/2;     
                //karan jar tu iStart + iEnd kela ani doghanchi addition integer limit exceed karat astil tar error yeil
                                           //so better way tyanna subtract karun ma mid kadhaycha
   

                if(Arr[iMid]==iNo || Arr[iStart]==iNo || Arr[iEnd]==iNo)
                {
                    bFlag=true;
                    break;
                }

                else if(Arr[iMid]< iNo)
                {
                    iStart=iMid+1;
                }

                else if(Arr[iMid]> iNo)
                {
                    iEnd=iMid-1;
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

    bRet=aobj->BinarySearch(iValue);

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


