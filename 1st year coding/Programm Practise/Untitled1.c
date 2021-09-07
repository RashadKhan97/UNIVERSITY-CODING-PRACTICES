#include<stdio.h>
int P(int a)
{
int i ;
for(i=2;i<=a/2;i++)
    {
  if(a%i==0)
  return 0;
}
return 1;
}
int main()
{
int a;
printf("Enter the Number Here:");
scanf("%d",&a);
if(P(a))
printf("%d is a prime number\n",a);
else
printf("%d is a non prime number\n",a);
return 0;
}
