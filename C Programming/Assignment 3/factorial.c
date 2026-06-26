// Find factorial of given number.

#include<stdio.h>
int main()
{
  int num =5;
  int sum=0;
  int fact=1;
  for(int i=1;i<=5;i++)
  {
    fact=fact*i;

  }
  sum=fact;
  printf("factorial =%d",sum);
  return 0;
}