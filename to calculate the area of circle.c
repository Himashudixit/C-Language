#include<stdio.h>

int main()
{
    int r;
    float a;

    printf("Enter the radius of the circle\n");
    scanf("%d",&r);

    a = 3.14*r*r;

    printf("The radius of the circle is %f",a);

    return 0;
}
