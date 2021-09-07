#include<stdio.h>

int sum(int *r,int *s)
{
    int x;
    x=*r+*s;
    return x;
}
int main()
{
    int *r;
    int *s;
    int n,m;

    printf("Enter the input here:\n");
    scanf("%d %d",&n,&m);
    r=&n;
    s=&m;

    sum(r,s);
    printf("The sum is:%d",sum(r,s));
}
