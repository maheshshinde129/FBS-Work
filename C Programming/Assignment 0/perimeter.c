//Write a c program to input the length and width of a rectangle and find its perimeter

#include<stdio.h>
int main()
{
    float length,width,perimeter;
    printf("enter the length of rectangle");
    scanf("%f",&length);
    printf("enter the width of rectangle");
    scanf("%f",&width);
    perimeter = 2*(length+width);
    printf("perimeter of rectangle = %2f\n",perimeter);
    return 0;
}