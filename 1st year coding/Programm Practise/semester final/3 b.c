#include<stdio.h>
main()
{
    int n[3][4];
    int sum[3]={0,0,0};
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
        printf("Enter the marks of %d students [%d][%d]: ",i,j,i+1);
        scanf("%d",&n[i][j]);
        sum[i] = sum[i] + n[i][j];
        }

    }
    printf("\n");

    for(i=0;i<3;i++)
    {
        printf("\n%d students total marks:%d",i+1,sum[i]);
    }
    return 0;
}
