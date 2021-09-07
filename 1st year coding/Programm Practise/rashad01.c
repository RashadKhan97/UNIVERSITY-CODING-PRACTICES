#include <stdio.h>
int sum(int n);
int main()
{
    int x, result;
    printf("Enter a positive integer: ");
    scanf("%d", &x);
    result= sum(x);
    printf("The Sum is = %d", result);
    return 0;
}
    int sum(int n)
{
        if (n != 0)
        return n + sum(n - 1);
    else
        return n;
}
