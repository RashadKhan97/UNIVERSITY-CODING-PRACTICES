#include<stdio.h>
void rev(int);
main()
{
    int s,n=10;
    rev(n);
    return 0;
}
void rev(int n)
{
    if(n==0)
        return ;
    else
    {
        printf("%d\n",n);
        return rev(n-1);
    }
}
