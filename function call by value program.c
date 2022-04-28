#include<stdio.h>

void swap(int a, int b){
      int temp = a;
      a = b;
      b = temp;
      printf("after swapping a = %d and b = %d\n", a, b);

}
int main(){
         int a, b;

    printf("Enter the value in a\n");
    scanf("%d", &a);

     printf("Enter the value in b\n");
    scanf("%d", &b);

    printf( "before swapping a = %d and b = %d\n", a, b);

    swap(a, b);
    return 0;


}

