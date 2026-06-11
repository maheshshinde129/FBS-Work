// Write a program to check given 3 digit number is pallindrome or not.

#include<stdio.h>
int main()
{
    int num=100;
    if(num/100 == num%10)
    {
        printf("number is pallindrome");

    }
    else
    {
        printf("number is not pallindrome");
    }
    return 0;
}