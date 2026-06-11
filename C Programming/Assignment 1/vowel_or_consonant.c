// Write a program to check whether a given character is vowel or consonant.

#include<stdio.h>
void main() {
    char ch='f';
    if ((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
     if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
        printf("%c Is vowel:-",ch);
     } else {
        printf("%c Is consonant:-",ch);
     }
    } else {
        printf("Enter a valid character....");
    }
}