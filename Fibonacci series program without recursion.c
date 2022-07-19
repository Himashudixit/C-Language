#include<stdio.h>

int main()
{
    int x = 0, y = 1, z, n, i;

        printf("Enter n number of elements: ");
        scanf("%d",&n);

        printf("\n%d %d ", x, y);

    for(i=0;i<=n;++i)
    {
        z = x + y;
        x = y;
        y = z;
        ++i;
        printf("%d ", z);
    }
    return 0;
}
