//pyramid pattern Input: n = 5

#include<stdio.h>
int main() {
    int i,j,n,k;
    printf("Enter the n:-");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1;j<=n;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}