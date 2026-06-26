//Check the given number is Strong number or not.

#include<stdio.h>
int main() {
    int num=144;
    int temp = num;
    int fact;
    int digit;
    int sum=0;
    while(temp>0) {
        digit = temp%10;
        fact = 1;
        for(int i=1; i<=digit; i++) {
            fact = fact*i;      
        }
        sum = sum+fact;
        temp = temp/10;
    }
    if(num==sum) {
        printf("Strong");
    } else {
        printf("Not Strong");
    }
    return 0;
}