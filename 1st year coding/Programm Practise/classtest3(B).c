#include<stdio.h>
main()
{
int First,Second,value;
printf("Enter the first number:");
scanf("%d",&First);
printf("Enter the second number:");
scanf("%d",&Second);
value=First;
First=Second;
Second=value;

printf("\nBefore Interchanging First=%d\nBefore Interchanging Second=%d\n",value,First);
printf("\nAfter Interchanging First=%d\nAfter Interchanging Second=%d\n",First,value);
return 0;
}
