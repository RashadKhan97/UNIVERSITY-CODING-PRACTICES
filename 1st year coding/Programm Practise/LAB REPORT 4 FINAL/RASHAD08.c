#include<stdio.h>
#include<string.h>
struct library
{
    char title[50];
    char author[30];
    int serial_number;
};
main()
{
    struct library p[3]={{"Calculus I","Dr.Fazlur Rahman",1},{"Teach Yourself C","Herbert Schildt",2},
                                        {"English Grammar","Betty S.Azar",3}};
    char a[50];
    printf("Enter Author Name: ");
    gets(a);
    int i;
    for(i=0;i<3;i++)
    {
        if(strcmp(a,p[i].author)==0)
        {
        printf("output:\nauthor:%s\ntitle:%s\nserial number:%d\n",p[i].author,p[i].title,p[i].serial_number);
        }
    }
    int n;
    printf("\nTake Serial number: ");
    scanf("%d",&n);
    for(i=0;i<3;i++)
    {
        if(n==p[i].serial_number)
        {
        printf("output:\nauthor:%s \ntitle:%s \nserial number:%d\n",p[i].author,p[i].title,p[i].serial_number);
        }
    }
}

