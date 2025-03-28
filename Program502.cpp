//Effecient Bubble Sort
// jevha data is sorted no need to make unnecessary iterations
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

        //Baherchya loop chi 1 iteration sampli ki ek element settle hoto
        //iterations of i is called as pass , kiti pass madhe sort hoto 
        //Bubble Sort madhe heavy elements khali jaatat ani light elements var yetat
       void BubbleSortEfficient()
       {
            int iTemp=0;
            int i=0,j=0;
            bool bFlag=false;

            for(i=0;i<this->iSize;i++)
            {
                printf("\nData after Pass %d\n",(i+1));
                bFlag=false;
                for(j=0;j<this->iSize-i-1;j++)
                {
                    if(Arr[j]>Arr[j+1])          //Jar data sorted asel tar flag false rahato ani mag we get out of loop and avoid unncecessary iterations
                    {
                        iTemp=Arr[j];
                        Arr[j]=Arr[j+1];
                        Arr[j+1]=iTemp;
                        bFlag=true;
                    }
                }
                if(bFlag==false)  // jar if condition madhe gelach nahi tar break karan data is already sorted
                {
                    break;
                }
                this->Display();
            }
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

    aobj->BubbleSortEfficient();

    //aobj->Display();
    delete aobj;

    return 0;
}