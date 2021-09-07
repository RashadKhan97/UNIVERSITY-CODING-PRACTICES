#include<stdio.h>
#include<string.h>

main()
{
    char str1[50];
    printf("Enter the input here:");
    gets(str1);
    int i,count_alph=0,count_digit=0,count_sp=0;
    for(i=0;str1[i]!='\0';i++)
    {
        if((str1[i]>='A'&&str1[i]<='Z')||((str1[i]>='a'&&str1[i]<='z')))
        {
            count_alph++;
        }
        else if((str1[i]>='0'&&str1[i]<='9'))
        {
            count_digit++;
        }
        else
            count_sp++;
    }
    printf("Number of alphabet is:%d\n",count_alph);
    printf("Number of digit is:%d\n",count_digit);
    printf("Number of special character is:%d",count_sp);

}
