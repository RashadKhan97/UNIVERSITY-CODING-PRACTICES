#include<stdio.h>
struct library
{
char author[50];
char title[100];
int serial_number;
};
main()
{
struct library s[100];
int i,n;
printf("Take input number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
fflush(stdin);
printf("Take input of library book %d:\n",i+1);
printf("Author:\n");
fgets(s[i].author,sizeof(s[i].author),stdin);
printf("Title:\n");
fgets(s[i].title,sizeof(s[i].title),stdin);
printf("Serial Number:\n");
scanf("%d",&s[i].serial_number);

}
for(i=0;i<n;i++)
{
printf("\noutput:\n\nauthor:%s\ntitle:%s\nserial number:%d\n",s[i].author,s[i].title,s[i].serial_number);
}
}


