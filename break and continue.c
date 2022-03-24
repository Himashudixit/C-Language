#include<stdio.h>

 main()
{
    int i;
    for(i=0; i<=10; i++)
    {

       if(i==5)
        {
        break;
        }
        if(i==3)
        {
        continue;
        }
        printf("\t%d",i);
        }
}


