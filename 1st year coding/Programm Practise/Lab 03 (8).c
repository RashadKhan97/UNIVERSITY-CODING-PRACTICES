#include <stdio.h>
 int swap(int *r, int *s)
{
   int subs;
   subs= *s;
   *s = *r;
   *r = subs;
}

int main()
{
   int n,m;

   printf("Enter the input here:\n");
   scanf("%d %d",&n,&m);

   printf("Before Swapping:\n n = %d \n m = %d\n",n,m);

   swap(&n,&m);
   printf("After Swapping:\n n = %d \n m = %d\n",n,m);
}
