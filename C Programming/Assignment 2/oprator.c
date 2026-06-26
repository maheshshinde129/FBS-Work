// Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.

#include<stdio.h>
int main() {
    int num1,num2;
    char op;
printf("enter the num 1");
scanf("%d",&num1);
printf("enter the num 2");
scanf("%d",&num2);
printf("enter the oprator (+,-,*,/,%%)");
scanf("%c",&op);
if(op == '+')
{
    printf("Result =%d",num1+num2);
}
else
{
    if(op == '-')
    {
        printf("Result =%d",num1-num2);
    }else{
        if(op=='*')
        {
            printf("result =%d",num1*num2);
        }else{
            if(op=='/')
            {
                printf("result =%d",num1/num2);
            }else{
                if(op=='*')
                {
                    printf("result =%d",num1*num2);
                }else{
                    if(op=='/')
                    {
                        printf("result =%d",num1/num2);
                    }else{
                        if(op=='%')
                        {
                            printf("result =%d",num1%num2);
                        }
                    }
                }
            }
        }
    }
} return 0;
}
