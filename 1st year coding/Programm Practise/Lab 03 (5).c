#include<stdio.h>
main()
{
    int *r;
    int s=97;
    r=&s;

    printf("The output of Value is:%d\n",*r);
    printf("The output of Address is:%p\n",r);
}
