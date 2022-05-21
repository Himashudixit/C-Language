#include<stdio.h>
#include<math.h>

int main()
{
    int no,copy,re,n=0,ans=0;

    printf("Enter the number \n");
    scanf("%d",&no);

    copy = no;

    while(copy!=0){
        copy = copy/10;
        n++;
    }

    copy = no;

    while(copy!=0)
    {
        re = copy%10;
        ans = ans + pow(re,n);
        copy = copy/10;
    }

    if(ans == no)
    {
        printf("\n %d is an armstrong number", no);
    }
    else
    {
        printf("\n %d is not an armstrong number ",no);
    }
    return 0;
}
