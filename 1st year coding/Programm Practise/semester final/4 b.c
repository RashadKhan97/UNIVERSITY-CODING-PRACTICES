#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,n,a[n];
    printf("Enter the input here: ");
    scanf("%d",&n);
    int *p;
    p = (int*)malloc(n*sizeof(int));
    int i;
    printf("At the very  First: \n");
    for (i=0;i<n;i++)
    {
        printf("\n%p\n",(p+i));
    }
    printf("\nEnter the input here: ");
    scanf("%d",&r);
    p = (int*)realloc(p,r*sizeof(int));
    printf("\nAnd Now:\n");

    for(i=0;i<r;i++)
    {
        printf("\n%p",(p+i));
    }
    return 0;
}
