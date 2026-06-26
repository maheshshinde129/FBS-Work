// Check the given number is Armstrong number or not..

#include<stdio.h>
int main()
{
    int num=153;
    int digit;
    int sum=0;
    int temp=num;
    while(temp>0)
    {
        digit = temp%10;
        sum = sum+(digit*digit*digit);
        temp = temp/10;
    }
    if(num==sum)
    {
        printf("Number is armstrong");
    }else{
        printf("Number is not armstrong");
    }
    return 0;
}