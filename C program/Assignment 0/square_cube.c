// Write a C program to find the square and cube of a given number

#include<stdio.h>
int main ()
{
    int n,square,cube;
    printf("enter the numbers");
    scanf("%d",&n);
    square=n*n;
    cube=n*n*n;
    printf("square = %d\n",square);
    printf("cube = %d\n",cube);
    return 0;
    
}