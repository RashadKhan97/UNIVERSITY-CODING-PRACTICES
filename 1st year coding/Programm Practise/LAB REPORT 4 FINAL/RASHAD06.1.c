#include<stdio.h>
struct customer
{
    char name[30];
    int id;
    char address[80];
};
int main()
{
    struct customer cus1={"Rashad",10,"Dhaka"},cus2={"Prem",25,"Dhaka"};

    printf("1st Customers  Information\n");
    printf("Name:%s\nId: %d\nAddress:%s\n\n\n",cus1.name,cus1.id,cus1.address);

    printf("2nd Customers  Information\n");
    printf("Name:%s\nId: %d\nAddress:%s",cus2.name,cus2.id,cus2.address);
    return 0;
}
