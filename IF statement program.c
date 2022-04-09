#include<stdio.h>

int main()
{
   int a;
    printf("ENTER A NUMBER\n");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("YOUR ENETRED NUMBER IS POSITIVE\n");
    }

    if(a<0)
    {
    printf("YOUR ENTERED NUMBER IS NEGATIVE\n");
    }
    return 0;
}
