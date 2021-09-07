#include<stdio.h>

    struct customer
    {
        int id;
        char name[30];
        char address[80];
    };
    int main()
{
    struct customer cust1,cust2;

        cust1.id ="16";
        cust1.name ="Rasu";
        cust1.address ="Dhaka Bangladesh";

    printf("Cust1 informations\n");
    printf("Id : %d\nname : %s\naddress : %s\n",cust1.id,cust1.name,cust1.address);

        cust2.id = "13";
        cust2.name = "kiki";
        cust2.address = "Bogura Bangladesh";

    printf("Cust2 informations\n");
    printf("Id : %d\nname : %s\naddress : %s\n",cust2.id,cust2.name,cust2.address);

    return 0;
}
