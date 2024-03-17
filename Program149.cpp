//Accept number from user and calculate its factorial using OOP approach

#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;  //This variable is declared private karan we don't want anyone outside class to change value of iNo which may distrub the class design if it was public

    public:
        Number(int X)
        {
            iNo=X;
        }

        //Logics

        //int Factorial(Number *this)
        int Factorial()
        {
            int iCnt=0;
            int iFact=1;
            for(iCnt=1;iCnt<=iNo;iCnt++)
            {
                iFact=iFact*iCnt;

            }
            return iFact;
        }
  
};

int main()
{
    int iValue=0,iRet=0;
    cout<<"Enter the number: "<<endl;
    cin>>iValue;

    Number *nobj=new Number(iValue); //Dynamic allocation of memory 

    iRet=nobj->Factorial();

            //Factorial(&nobj);

    cout<<"Factorial is: "<<iRet<<endl;

    delete nobj;

    return 0;
}