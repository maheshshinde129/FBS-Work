// Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>
int main()
{
    int a=122,b=45,c=32;
    if (a>b && a>c)
    {
        printf("A is greater");
        
    } else if(b>c && b>a)
    {
        printf("B is greater");
    }else{
        printf("C is greater");
    }
}