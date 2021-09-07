#include<stdio.h>
#include<string.h>
int main()
{
    char operator[10];
    char st1[50],st2[50];
    int n,o,i,j;

    printf("Which operation do you want to perform? (copy,concat,quit): ");
    while(scanf("%s",&operator)!=EOF)
    {
        if(strcmp(operator, "quit")==0) {
            break;
        }
        printf("Write down two strings:\n");
        printf("String1: ");
        scanf("%s",&st1);
        printf("String2: ");
        scanf("%s",&st2);

        if(strcmp(operator, "copy")==0)
            {
                for(i=0;st1[i]!='\0';i++)
           {
               n=i;
               n++;
           }
            for(j=0;st2[j]!='\0';j++)
           {
               o=j;
               o ++;
           }
           if(n>o)
            {
                strcpy(st2,st1);
                printf("\nAfter copying: %s",st2);
            }

           else
            {
                strcpy(st1,st2);
                printf("\nAfter copying: %s",st1);
            }

            break;
        }
        else if(strcmp(operator, "concat")==0) {
            printf("\nAfter concatination: %s %s\n",st2,st1);
            break;
        }

    }

    return 0;
}
