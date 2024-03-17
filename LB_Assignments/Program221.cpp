//Write a generic program which accept one value and one number from user.Print the value that number of times 

#include<iostream>
using namespace std;

template<class T>

void Display(T num,int size)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=size;iCnt++)
    {
        cout<<num<<"\t";
    }
    cout<<endl;
}

int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);
    return 0;
}