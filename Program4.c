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
    auto int iValue1=0, iValue2=0, iAns=0;
    
    printf("\nENter 1st number: ");
    scanf("%d", &iValue1);
    printf("\nENter 2nd number: ");
    scanf("%d", &iValue2);

    iAns = iValue1 + iValue2;

    printf("\nAddition is : %d", iAns);

    return 0;
}


//Step 5: Test the code

/*
Test case 1:
Input : 10 11
Output: 21

Test case 2:
Input : 10 0 
Output: 10

Test case 3:
Input : 12 -6
Output: 6

Test case 4:
Input : -6 -5
Output: -11

*/