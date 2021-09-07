#include<stdio.h>
#include<string.h>
main()
{
    char r[30], s[30];
    printf("Enter the input here: ");
    gets(r);
    strcpy(s,r);
    strrev(s);
    if(strcmp(r,s)==0)
        printf("Yes,This is a palindrome string.");
    else
        printf("No,This is not a palindrome string.");
}
