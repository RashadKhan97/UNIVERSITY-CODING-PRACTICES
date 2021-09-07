#include<stdio.h>
int main()
{
    char c[60];

    int i;
    printf("Write the text here :");
    gets(c);

    for (i=0;c[i]!='\0';++i);

    printf("Length of the string:%d\n",i);
    return 0;
}
