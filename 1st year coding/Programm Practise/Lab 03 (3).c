#include<stdio.h>
#include<string.h>
main()
{
    char st[50];
    int i,count=0;
    printf("Enter the input here:");
    fgets(st,sizeof(st),stdin);
    for(i=0;st[i]!='\0';i++)
    {
        if(st[i]==' '||st[i]=='\n'||st[i]=='\t')
        {
            count++;
        }

    }
    printf("Number of words are:%d",count);
}
