// Problem Statement : accept two values from user and perform the addition


//Step 1:Understand the problem statement
//Conclusion we have to accept to integers and perform its addition

//Step 2:Write the algorithm
/*
    START
        Accept first number from user and store it into no1
        Accept second number from user and store it into no2
        Create one variable to store the result named as ans
        Perform addition of no1 & no2 & store the result in ans
        Display the result to the user
    STOP
*/

//Step 3:Decide the programming language C/C++/JAVA
//We select C 

//Step 4:Write the program 
#include <stdio.h>

int main()
{
    int i, j, k;
    
    printf("\nENter 1st number: ");
    scanf("%d", &i);
    printf("\nENter 2nd number: ");
    scanf("%d", &j);

    k = i + j;

    printf("\nAddition is : %d", k);

    return 0;
}