#include<stdio.h>

int main()
{
    int a;
    printf("Enter The Number\n");
    scanf("%d",&a);
   // printf("%d",a);
    if(a<10){
        printf("your entered number is  lesser than 10 \n");

    }
     else if(a==10){
        printf("your entered number is 10\n");
     }
    else {
            printf("your entered number is greater than 10 \n");


    }
    return 0;

}
