#include<stdio.h>
int main()
{
    int i;
    i=10;
    sum=0;
    do{
        sum=sum+i;
        i=i+1;
    }
    while(i<=20);
    printf("%d",sum);
    return 0;
}
