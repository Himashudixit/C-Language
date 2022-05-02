#include<stdio.h>

int main()
{
    int m,n;
    printf("enter a number in m\n");
    scanf("%d",&m);

    printf("enter a number in n\n");
    scanf("%d",&n);

    long long int val = 1;
    for(int i = 0; i < n; i++)
    {
        val = val * m;
    }
    printf("The value of %d to the power %d is %lld",m, n, val);

    return 0;
}
