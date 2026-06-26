// Accept the price from user. Ask the user if he is a student (user may say y or n). If he is a student and he has purchased more than 500 than discount is 20% otherwise
// discount is 10%.But if he is not a student then if he has purchased more than 600 discount is 15% otherwise there is not discount.

#include<stdio.h>
int main() {
    float price,discount;
    char student;
    printf("enter the price");
    scanf("%f",&price);
    printf("Are you student? (y/n):");
    scanf(" %c",&student);
     if(student == 'y' || student =='Y'){
    if(price > 500){
        discount= price*0.10;
        printf("Discount = %.2f\n",discount);
    } else{
        printf("no discount\n");
    } 
     }
    else 
    {
        if(price > 600){
        discount = price*0.15;
        printf("Discount = %.2f\n",discount);
    }else{
        printf("no discount\n");
 
    }
}
    return 0;
}