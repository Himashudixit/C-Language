#include<stdio.h>
void main()
{
 int* A, a;

   a = 100;
   printf("Address of a: %p\n", &a);
   printf("Value of a: %d\n", a);

   A = &a;
   printf("Address of pointer A: %p\n", A);
   printf("Content of pointer A: %d\n", *A);
}
