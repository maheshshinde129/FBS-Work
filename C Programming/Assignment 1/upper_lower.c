// write a program to check whether a given character is uppercase or lowercase

#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);

    if ((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z')) {

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase");
    }
    else 
    {
        printf("Lowercase");
        }
    } else {
        printf("enter valid character");
    }
        return 0;
    }
