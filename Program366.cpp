//generic 
#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int No1;
        int No2;

        Arithmetic(int A,int B)
        {
            this->No1=A;
            this->No2=B;
        }

        int Addition()
        {
            int Ans=0;
            Ans=No1+No2;
            return Ans;
        }
};
int main()
{
    Arithmetic aobj(11,10);
    int Ret=0;
    Ret=aobj.Addition();

    cout<<"Addition is:  "<<Ret<<endl;
    return 0;
}