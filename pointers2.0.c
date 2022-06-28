#include<stdio.h>
int main()
{
    int i = 72;
    int*j = &i;
    printf("address of i = %u\n",&i);
    printf("address of i = %u\n",j);
    printf("address of i = %u\n",&j);
    printf("value of i = %d\n",i);
    printf("value of i = %d\n",*(&i));
    printf("vlue of i = %d\n",*j);

    return 0;
}
