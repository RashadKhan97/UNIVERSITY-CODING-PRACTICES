#include <stdio.h>
int fib(int n);
int main()
{
    int n,i;
    printf("Enter the number of Fibonacci series: ");
    scanf("%d", &n);
    printf("The Fibonacci series is:\n",n);
    for(i = 0; i < n; i++)
        {
            printf("%d ", fib(i));
        }
    return 0;
}
int fib(int n)
{
    if(n < 2)
        return n;
    else
        return fib(n - 1) + fib(n- 2);
}
