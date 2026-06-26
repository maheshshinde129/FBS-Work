// Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.

#include<stdio.h>
void main() {
    int a,b,c;
    printf("Enter side of A:- ");
    scanf("%d",&a);
    printf("Enter side of B:- ");
    scanf("%d",&b);
    printf("Enter side of C:- ");
    scanf("%d",&c);

    if(a==b&&a==c){
        printf("Equilateral");
    } else if(a==b||a==c) {
        printf("isosceles");
    } else {
        printf("scalene");
    }
}