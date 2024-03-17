#include<iostream>
using namespace std;


int main()
{
    int Size=0,iCnt=0;
    int *ptr=NULL;

    cout<<"enter number of elements: "<<endl;
    cin>>Size;

    ptr=new int[Size];
    
    cout<<"enter the elements of array"<<endl;

    for(iCnt=0;iCnt<Size;iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements of array are: "<<endl;
    for(iCnt=0;iCnt<Size;iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }

    delete []ptr;

    
    return 0;
}