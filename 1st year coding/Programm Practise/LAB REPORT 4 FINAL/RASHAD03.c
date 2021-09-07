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
    for(i=0;i<n;i++)

    {
        printf("\nEnter the input here:") ;
        scanf("%d",(p+i));
        printf("You have entered :%d\n ",*(p+i));
    }
    free(p);
}
