#include<stdio.h>
#include<string.h>
main()
{
    char str1[30], str2[30];
    printf("Enter the input here: ");
    fgets(str1,sizeof(str1),stdin);
    int i,j,length=0;
    while(str1[length]!='\0')
    {
        length++;
    }
    for(j=length-1,i=0;j>=0;j--,i++)
    {
        str2[i]=str1[j];
    }
    str2[i]='\0';
    strrev(str1);
    printf("After reversing With library function: %s\n",str2);
    printf("After reversing Without library function: %s",str1);
}
