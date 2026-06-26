// Check the given number is Palindrome number or not.

#include<stdio.h>
int main() 
{
    int num=1221;
    if(num%10 == num/1000 )
    {
        printf("number is pallindrome");
    }else{
        printf("number is not pallindrome");
    }
    return 0;
}