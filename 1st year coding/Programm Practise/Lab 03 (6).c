#include<stdio.h>
int increment(int *r)
{
    *r=*r+1;
}
main()
{
    int *r;
    printf("Enter the input here:");
    scanf("%d",&r);
    increment(&r);
    printf("\nThe Output Value is:%d",r);
}
