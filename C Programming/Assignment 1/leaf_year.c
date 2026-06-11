// Write a program to check whether a given year is leaf year.

#include<stdio.h>
int main()
{
  int year=2023;
  if(year%4==0)
  {
    printf("year is leaf");
  }
  else
  {
    printf("year is not leaf");

  }
  return 0;
}