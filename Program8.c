//Problem: Accept radius from user and find area of circle

//step1: Understand the problem statement 
//Conclusion : We are going to use the formula as PI*r*r

/*step2: Algorithm
    START
        Accept the radius from the user and store in in radius
        Create varibale as pi and store value 3.14
        calculate area pi*radius*radius
        display the value of area to the user
    STOP

*/
#include<stdio.h>
 
//////////////////////////////////////
//  Function Name : calculateAREA
//  description:    Used to calculate area of circle
//  input:          float
//  output:         float
//  Author name:    Hrushiraj Gandhi
//  date:           02/10/2023
///////////////////////////////////////
#define PI 3.14
float calculateAREA(float fradius)
{
    auto float farea=0.0f;
    farea=PI*fradius*fradius;
    return farea;
}


//Entry point function 
int main()
{
    auto float fvalue=0.0f;
    auto float fans=0.0f;

    printf("\nENter the radius of the circle: ");
    scanf("%f",&fvalue);
    fans=calculateAREA(fvalue);

    printf("\nThe radius of the circle is %f",fans);
    return 0;
}



/* 
Test Case 1:
Input : 10.5
output: 

Test Case2:

input : -7.8
output: 
*/