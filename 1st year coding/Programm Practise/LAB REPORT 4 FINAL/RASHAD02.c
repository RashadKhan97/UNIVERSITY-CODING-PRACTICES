#include<stdio.h>
main()
{
int y[4];
int j;
printf("Enter the element here:\n");
for(j=0; j<4; j++)
{
    scanf("%d",(y+j));
}
int max= *y;
for(j=0;j<4;j++)
{
    if(max<*(y+j))
        max=*(y+j);
}
printf("Maximum is: %d",max);
return 0;
}
