// Write a C program to swap two numbers using a temporay third variable

#include<stdio.h>
int main() 
{
    int a,b,temp;
    printf("Enter number of A:-");
    scanf("%d",&a);
    printf("Enter number of B:-");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping\n");
    printf("a=%d\n",a);
    printf("b=%d",b);
    return 0;
}