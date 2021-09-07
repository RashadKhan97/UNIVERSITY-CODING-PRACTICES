#include <stdio.h>
int prime (int a)
{
int i;
for(i=2;i<=a/2;++i)
{
if(a%i==0)
    return 0;
}
	return 1;
}
int main ()
{
int a;
print(" take a number : \n");
scanf("%d",&a);
if (prime(a))
printf("it is a prime number\n");
else
   printf("it is a non prime number\n");
return 0;
}
