#include<iostream>
using namespace std;

void display(int i,const int j)
{
    int a=10;
    const int b=20;

    i++;  //A
    j++;  //NA
    a++;  //A
    b++;  //NA
}
int main()
{
    display(11,21);
    return 0;
}