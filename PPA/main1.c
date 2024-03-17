#include<stdio.h>

int i;
int j=11;

extern int no;   //no is global variable from file helper.c 
//it is not accesible as no is declared static 
int main()
{   
    printf("\nValue of i = %d",i);  //0
    printf("\nValue of j = %d",j);  //11
    printf("\nValue of no = %d",no);  //

    return 0;
}



// command used is -  
//gcc main.c helper.c -o myexe