// Write a c program to input five number and their average.

#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5,sum;
    float avg;
    printf("enter five numbers");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    sum = n1+n2+n3+n4+n5;
    avg=sum/5;
    printf("average =%.2f",avg);
    return 0;
}