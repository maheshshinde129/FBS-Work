// Check the given number is Perfect number or not.

#include<stdio.h>
int main() {
    int num=7;
    int sum=0;
    for(int i=1; i<num;i++)
    {
        if(num%i==0)
    {
        sum = sum+i;
    }
    }
    if(sum==num)
    {
        printf("Number is perfect");
    }else{
        printf("Number is not perfect");
    }
    return 0;


}