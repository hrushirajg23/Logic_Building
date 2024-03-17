#include<iostream>
using namespace std;

float calculate(float marks,float outof =100.0)
{
    float percentage= ((marks/outof)*100);
    return percentage;
}

int main()
{
    float ans=0.0f;

    ans=calculate(86,100);
    cout<<"Percentage is:"<<ans<<endl;

    ans=calculate(86);
    cout<<"Percentage is:"<<ans<<endl;

    ans=calculate(320,400);
    cout<<"Percentage is:"<<ans<<endl;
    return 0;
}