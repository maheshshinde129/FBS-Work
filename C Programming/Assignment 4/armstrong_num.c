// 1. Print armstrong numbers in the given range 1 to n.

#include<stdio.h>
   int main() {
   int num;
   int sum;
   int temp;
   int digit;
   int count;
   printf("enter the number:-");
   scanf("%d",&num);
   for(int i=1;i<=num;i++)
   {
       temp=i;
       count=0;
       while(temp>0){
           count++;
           temp=temp/10;
       }
      temp=i;
      sum=0;
   
   while(temp>0)
   {
      digit=temp%10;
      int power=1;
      for(int j=1;j<=count;j++){
      power=power*digit;
      }
      sum=sum+power;
      temp=temp/10;
   }
   if(sum==i)
   {
      printf("%d\n",i);
   }
}
   return 0;
}
