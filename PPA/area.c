#include<stdio.h>

int main()
{
    const float pi=3.14f;
    float radius=0.0f;
    float area=0.0f;
    printf("\nEnter the radius: ");
    scanf("%f",&radius);
    area=radius*radius*pi;
    printf("\nArea is %f",area);
    return 0;
}