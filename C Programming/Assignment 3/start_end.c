// Sum of numbers in given range. Find sum of numbers from start to end.

#include<stdio.h>
int main() {
    int start=11;
    int end=25;
    int sum=0;
    for(int i=start;i<=end;i++)
    {
      sum = sum+i;

    }
    printf("%d",sum);
    return 0;

}
