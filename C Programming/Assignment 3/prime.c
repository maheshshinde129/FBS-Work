// Check the given number is prime or not.

#include<stdio.h>
int main() {
    int num=8;
    int sum =0;
    for(int i=1;i<8;i++)
    {
        if(num%i==0)
        {
         sum = sum+i;
        }
    }
    if(sum==1)
    {
        printf("Number is prime");
    }else{
        printf("Number is not prime");
    }
    return 0;
}