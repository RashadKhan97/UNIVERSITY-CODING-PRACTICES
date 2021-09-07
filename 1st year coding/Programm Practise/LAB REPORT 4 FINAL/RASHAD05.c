#include<stdio.h>
#include<stdlib.h>
main()
{
    int n;
    printf("Enter the elements here: ");
    scanf("%d",&n);
    int *p;
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("Not enough space!!");
        exit(0);
    }
        int i;
        printf("\n\nEnter the values here:\n") ;
        for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum + *(p+i);
    }
    printf("The sum is:%d",sum);
    free(0);
}

