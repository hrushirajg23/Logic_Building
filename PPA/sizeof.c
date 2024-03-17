#include<stdio.h>

int main()
{   
    char ch = 'A';
    int i=21;
    float f =12.32f;
    double d =89.90;
    
    printf("\nSize of character is :%d bytes",sizeof(ch));
    printf("\nSize of integer is : %d bytes",sizeof(i));
    printf("\nSize of float is : %d bytes",sizeof(f));
    printf("\nSize of double is : %d bytes",sizeof(d));

    printf("\nBase address of Character is : %d",&ch);
    printf("\nBase address of integer is : %d",&i);
    printf("\nBase address of float is : %d",&f);
    printf("\nBase address of double is : %d",&d);

    
    
    return 0;
}