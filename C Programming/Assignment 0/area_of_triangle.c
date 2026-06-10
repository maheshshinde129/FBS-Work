// Write a c program to input the base and height of a triangle and calculate its area

#include<stdio.h>
int main()
{
    float base,height,area;
    printf("enter the base of triangle");
    scanf("%f",&base);
    printf("enter the height of triangle");
    scanf("%f",&height);
    area = (base * height)/2;
    printf("area of trianglec=%2f\n",area);
    return 0;

}