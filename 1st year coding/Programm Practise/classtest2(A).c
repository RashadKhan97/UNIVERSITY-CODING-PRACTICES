#include <stdio.h>
 int main()
 {
    float i,n,sum=0.0;
    printf("Enter The Desire Number Here:");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+((pow(i,2))/(pow((i+1),2)));
    }
    printf("\nThe sum is: %f",sum);
 }
