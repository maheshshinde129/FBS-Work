// Find Sum of first and last digit of given number.

#include<stdio.h>
int main() 
{
    int num=2365;
    int last=num%10;
    int temp =num;
    int first;
    int sum=0;
    while(temp>=10)
    {
        temp=temp/10;

    }

    first=temp;
    sum= first+last;
    printf("%d",sum);
    return 0;
}