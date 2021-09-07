#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long fact = 1;
    printf("Enter a positive integer here: ");
    scanf("%d", &n);

    if (n < 0)
        printf("negative number doesn't exist");
    else
        {
            for (i = 1; i <= n; i++)
            {
                fact *= i;
            }
            printf("Factorial of %d = %llu", n, fact);
        }
    return 0;
}
