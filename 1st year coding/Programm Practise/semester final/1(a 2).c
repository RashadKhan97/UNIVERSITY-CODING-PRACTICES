#include <stdio.h>

int  main()
{
    odd_number(10);
}

int odd_number(int i)
{
    if (i >= 1)
    {
        if (i % 2 == 1)
        {
            printf("%d \n", i);
        }
        odd_number(i - 1);
    }
}
