#include<stdio.h>
main()
{
int y[5];
int j;
printf("Enter the elements here: \n");
for(j=0; j<5; j++)
{

    scanf("%d",(y+j));
}
    printf("You have entered: \n");
    for(j=0; j<5; j++)
   {
        printf("value is: %d", *(y+j));
        printf("\t address is: %p \n", (y+j));
   }
    return 0;
}
