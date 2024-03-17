#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int arr[5];             //static
    int *ptr1=(int *)malloc(5*sizeof(int));   //Dynamic in c

    int *ptr2= new int[5];        //Dynamic in c++

    free(ptr1);         //C
    delete []ptr2;      //C++


    return 0;
}