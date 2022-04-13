#include<stdio.h>

int main()
{
    int a;
    printf("Enter The Number\n");
    scanf("%d",&a);
   // printf("%d",a);
    if(a<=10){
        printf("your entered number is either 10 or lesser than 10%d \n",a);

    }
    else{
            printf("your entered number is greater than 10 %d\n",a);


    }
    return 0;

}
