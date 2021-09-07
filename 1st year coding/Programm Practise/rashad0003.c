#include<stdio.h>
#include<string.h>
int main()
{
   char a[50],b[100];
   printf("Write a text Here:");
   gets(a);
   strcpy(b,a);

   printf("Length Of the string: %d\n",strlen(a));
   printf("Before Copying: %s\n",a);
   printf("After Copying: %s\n",b);
   return 0;
}

