#include<stdio.h>

void Fun_Value(int iNo)
{
    iNo++;
}

void Fun_Address(int *ptr)
{
    (*ptr)++;
}
void Fun_Reference(int &ref)
{
    ref++;
}

int main()
{
    int i=10,j=10,k=10;

    Fun_Value(i);

    Fun_Address(&j);

    Fun_Reference(k);

    printf("\nCall by Value: i  %d",i);
    printf("\nCall by Address: j  %d",j);
    printf("\nCall by Reference: i  %d",k);


    return 0;
}