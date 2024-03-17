//Accept N numbers from user and return addition of even Numbers

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
        ~Array()        //destructor
        {
            delete []Arr; //Deallocation the resource
        }

        void accept()  //Member function
        {
            int iCnt=0;
            cout<<"Please enter the elements :"<<endl;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void display()  //Member function
        {
            int iCnt=0;
            cout<<"Elements of array are :"<<endl;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }

        //int AdditionEven(Array *this)
        int AdditionEven()
        {
            int iSum=0;
            int iCnt=0;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                if(iCnt%2==0)
                {
                    iSum=iSum+Arr[iCnt];   //iSum = iSum + *(Arr+iCnt)
                }

            }
            return iSum;

        }
        
};

int main()
{
    int iLength=0,iRet=0;

    cout<<"Enter the number of elements you want to store: "<<endl;
    cin>>iLength;

    Array *aobj=new Array(iLength);

    aobj->accept();
    //accept(&aobj);
    aobj->display();
    //display(&aobj);

    iRet= aobj->AdditionEven();

    cout<<endl<<endl;
    cout<<"Addition of even numbers is :"<<iRet<<endl;

    //Pahile destructor call hoil ma aobj delete hoil
    delete aobj;
    return 0;
}


