#include<stdio.h>
#include<string.h>
struct Telephone
{
    char t_name[50];
    int tele_number;
    int zip_code;
};
int main()
{
    struct Telephone Tele[10];
    int i;
     for(i=0;i<2;i++)
    {
        fflush(stdin);
        printf("Enter the name here: ");
        gets(Tele[i].t_name);
        printf("Enter telephone number here: ");
        scanf("%d",&Tele[i].tele_number);
        printf("Enter the zipcode: ");
        scanf("%d",&Tele[i].zip_code);
    }
    printf("\nAsk user: ");
    int n,num;
    char a[50];
    scanf("%d",&n);
    if(n==1)
    {
        fflush(stdin);
        printf("\nEnter a name here: ");
       gets(a);
        for(i=0;i<2;i++)
        {
            if(strcmp(Tele[i].t_name,a)==0)
            {
                printf("\n Name:%s\n Telephone Number:%d\n Zip Code%d\n",Tele[i].t_name,Tele[i].tele_number,Tele[i].zip_code);

            }
        }
    }
     else if(n==2)
    {
        printf("\nEnter a telephone number: ");
        scanf("%d",&num);
        for(i=0;i<2;i++)
        {
            if(Tele[i].tele_number==num)
            {
                printf("\n Name: %s\n Telephone Number: %d\n Zip Code: %d\n",Tele[i].t_name,Tele[i].tele_number,Tele[i].zip_code);

            }
        }
    }
    return 0;
}

