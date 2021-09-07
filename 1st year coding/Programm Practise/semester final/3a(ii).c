#include<stdio.h>
main()
{
    int *m,a = 15;
    m = &a;
    a = 10;
    printf("%d\t%d",*m,a);
    *m=*m+1;
    printf("\n%d\t%d",*m,a);

    int b[5]={1,2,5,3,7};
    printf("\n%d",*b+2);
    printf("\n%d",*(b+2));
    printf("\n%d",*(b+4));
}
