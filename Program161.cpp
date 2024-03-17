//Problems on strings
#include<iostream>
using namespace std;

class String
{
    private:
        char *str;
        int iSize;

    public:
        String()  //Default constructor : gets called is user doesn't mention size
        {
            iSize=20;
            str=new char[iSize];
        }
        String(int X)// Parameterized constructor: gets called if user enter the size
        {
            iSize=X;
            str=new char[iSize];
        } 

        ~String()
        {
            delete []str;
        }

        void accept()
        {
            cout<<"Enter the string"<<endl;
            cin.getline(str,iSize);
        }

        void display()
        {
            cout<<"String is :"<<endl;
            cout<<str<<endl;
        }
        int CountCapital()
        {
            int iCnt=0;
            char *temp=str;
            while(*temp!='\0')
            {
                if((*temp>='A') && (*temp<='Z'))
                {
                    iCnt++;

                }
                temp++;
            }
            return iCnt;
        }
        
};

int main()
{
    String *sobj1=new String(30);
    int iRet=0;
    sobj1->accept();

    iRet=sobj1->CountCapital();

    cout<<"Capital count is : "<<iRet<<endl;

    sobj1->display();
    
    delete sobj1;
   
    return 0;
}