#include<stdio.h>
main()
{
    int i, total=0,x,k;
    scanf("%d",k);

    for(i=1;i<10;i++)
    {
        if(i%2==0)
            total+=i;
        else
            total=total-i;
    }
    printf("total is: %d",total);
   x=total;
}

