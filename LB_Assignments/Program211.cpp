#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int Size;
    public:
        Array(int value=10)  //parameterized constructor with default argument
        {
            cout<<"Inside Constructor\n";

            this->Size=value;
            this->Arr=new int[Size];
        }
        Array(Array &ref)
        {
            cout<<"Inside copy constructor";
            this->Size=ref.Size;
            this->Arr=new int[this->Size];

            for(int i=0;i<Size;i++)
            {
                this->Arr[i]=ref.Arr[i];
            }
        }
        ~Array()
        {
            cout<<"Inside Destructor"<<endl;
            delete []Arr;

        }

        inline void Accept();
        inline void Display();
};

void Array::Accept()
{
    cout<<"Please Enter the values:"<<endl;
    for(int i=0;i<this->Size;i++)
    {
        cin>>Arr[i];
    }
}

void Array::Display()
{
    cout<<"Elements are: "<<endl;

    for(int i=0;i<this->Size;i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<endl;
}

class ArrSearch:public Array
{
    public :
        ArrSearch(int no=10):Array(no)
        {}

        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int Sumall();

};

int ArrSearch::SearchFirst(int No)
{
    int i=0;
    for( i=0;i<Size;i++)
    {
        if(Arr[i]==No)
        {
            break;
        }
    }
    if(i==Size)
    {
        return -1;
    }
    else
    {
        return i+1;
    }
}
int ArrSearch::Frequency(int Value)
{
    int iCnt=0;
    for(int i=0;i<Size;i++)
    {
        if(Arr[i]==Value)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch::SearchLast(int iValue)
{
    int iCnt=0;
    int i=0;
    for( i=0;i<Size;i++)
    {
        if(Arr[i]==iValue)
        {
            iCnt=i;
        }
    }
    return iCnt+1;
}

int ArrSearch::EvenCount()
{
    int iCnt=0;
    int i=0;
    for(i=0;i<Size;i++)
    {
        if(Arr[i]%2==0)
        {
            iCnt++;
        }
    }
    return iCnt;
}


int ArrSearch::OddCount()
{
    int iCnt=0;
    int i=0;
    for(i=0;i<Size;i++)
    {
        if(Arr[i]%2!=0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch::Sumall()
{
    int i=0,iSum=0;

    for(i=0;i<Size;i++)
    {
        iSum=iSum+Arr[i];
    }
    return iSum;
}

int main()
{
    cout<<"Inside main\n";
    int iRet=0;
    ArrSearch sobj(15); //set size to 15 
    sobj.Accept();
    sobj.Display();

    iRet=sobj.Frequency(11);

    cout<<"Frequency is "<<iRet<<endl;

    iRet=sobj.SearchFirst(11);

    cout<<"First Occrence is "<<iRet<<endl;
    
    iRet=sobj.SearchLast(11);

    cout<<"Last Occurence is "<<iRet<<endl;
    
    iRet=sobj.EvenCount();

    cout<<"Even count is: "<<iRet<<endl;
    
    iRet=sobj.OddCount();

    cout<<"Odd Count is "<<iRet<<endl;

    iRet=sobj.Sumall();

    cout<<"Sum of all elements is "<<iRet<<endl;
    
    return 0;
}
