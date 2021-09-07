#include<stdio.h>
#define Max 5

int main()
{
    char a[Max];

    printf("Enter a string here:");
    fgets(a,Max,stdin);
    printf("String is: %s\n",a);

    return 0;
}

