#include<stdio.h>

int main()
{
    int a,b;
    a=5;
    b=6;
    //Arithmatic Operator
    printf("a + b = %d\n", a+b);
    printf("a - b = %d\n", a-b);
    printf("a * b = %d\n", a*b);
    printf("a / b = %d\n", a/b);
    printf("a % b = %d\n", a%b);

    //Relational Operator
    printf("%d\n", a==b);
    printf("%d\n", a!=b);
    printf("%d\n", a>b);
    printf("%d\n", a<b);
    printf("%d\n", a>=b);
    printf("%d\n", a<=b);

    //Logical Operator
    printf("%d\n", a&&b);
    printf("%d\n", a||b);
    printf("!(a==5)%d\n", !a);

    //Bitwisw Operator
    printf("output = %d\n", a&b);
    printf("output = %d\n", a|b);
    printf("output = %d\n", a^b);
    return 0;
}


