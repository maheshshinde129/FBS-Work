// write a c program to input marks of five subjects find the total marks and calculate the percentage

#include<stdio.h>
int main()
{
    int M1=23,M2=34,M3=56,M4=65,M5=89;
    int total=M1+M2+M3+M4+M5;
    float percentage=total/5;
    printf("total marks:-%d\n",total);
    printf("percentage:-%.2f%%",percentage);
    return 0;
    
}