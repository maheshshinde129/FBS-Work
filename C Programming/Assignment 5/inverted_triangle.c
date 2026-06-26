// Print an inverted right-angled triangle pattern Input: n = 5

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the n:-");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    printf("\n");
    }
    return 0;
}