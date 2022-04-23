#include<stdio.h>
void main()
{
    int a[10],i;
    int even = 0, odd = 0;
    printf("enter array elements");
    for(i=0;i<10;i++)
    {
        scanf("%d", &a[i]);

        if(a[i]%2==0)
        even++;
        else
        odd++;

    }
        printf(" total even elements are %d", even );
        printf(" \n total odd elements are %d", odd);

}
