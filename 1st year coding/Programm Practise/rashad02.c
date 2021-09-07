#include<stdio.h>
unsigned long long fib(int n);
int main()
{
    int n;
    unsigned long long num;

    printf("Enter the number here:");
    scanf("%d",&n);
    num=fib(n);

    printf("The %d th number in Fibonacci series is %llu",n,num);
    return 0;
}
unsigned long long fib(int n)
{
    if(n==0)
        return 0;
    else
        if (n==1)
        return 1;
    else
        return fib (n-1) + fib (n-2);
}
