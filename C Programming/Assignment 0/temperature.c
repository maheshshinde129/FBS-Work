// write a C program to convert temperature from Celsius to Fahrenheit

#include<stdio.h>
int main () 
{
    float temp,celsius,fahrenhiet;
    printf("enter the temp in celsius");
    scanf("%f",&celsius);
    fahrenhiet = ((celsius*9/5)+32);
    printf("temp in fahrnhiet = %2f",fahrenhiet);
    return 0;
}

