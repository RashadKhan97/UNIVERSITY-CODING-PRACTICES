#include<stdio.h>
int main()
{
    int a,b;
    int temp;
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;

    printf("\nBefore a=%d\nBefore b=%d\n",temp,a);
    printf("\nAfter a=%d\nAfter b=%d\n",a,temp);
    return 0;
}
