#include<stdio.h>

int main()
{
    int a[2][2];
    int i,j;
    printf("Enter the array Elements\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           scanf("%d",&a[i][j]);
        }

    }
    printf("array elements in matrix(2-d) form\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
         printf("\n");


    }
    return 0;

}
