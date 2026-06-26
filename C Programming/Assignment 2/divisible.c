// Accept a number and check if it is divisible by 3, 5, or both.

#include<stdio.h>
int main() {
 int num=20;
 if( num %3 == 0 && num %5 == 0)
 {
    printf("divisible by both");
 }else if(num % 3 == 0)
 {
    printf("divisible by 3");
 }else if(num % 5 == 0)
 {
    printf("divisible by 5");
 }else{
    printf("neither by 3 or 5");
 }
 return 0;
}