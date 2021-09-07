#include<stdio.h>
int main()
{
    char c[50],d[50];
    int i;
    printf("Write your name here:");
    gets(c);

    for(i=0;c[i]!='\0';i++)
    {
        d[i]=c[i];
    }
      d[i]='\0';
    printf("After copying: %s",d);
    return 0;
}

