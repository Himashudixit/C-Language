#include<stdio.h>

int main()
{
    int n, sum=0;
        printf("Enter the last natural number you want to sum of\n");
        scanf("%d",&n);

        sum = (n*n + n)/2;

        printf("Sum of the first %d natural numbers is %d\n",n,sum);

    return 0;
 }
