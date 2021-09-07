#include<stdio.h>
main()
{
    float temp1,temp2;
    printf("Input a temperature in celsius :");
    scanf("%f",&temp1);
    temp2=((9.0/5.0)* temp1)+ 32.0;
    printf("\nTemperature in fahrenheit is :%.2f",temp2);
}
