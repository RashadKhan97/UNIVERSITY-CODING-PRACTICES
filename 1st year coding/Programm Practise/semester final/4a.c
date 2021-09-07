#include<stdio.h>
main()
{
    FILE *file_name1,*file_name2;
    file_name1=fopen("file_name1.txt","r");
    file_name2=fopen("file_name2.txt","w");

    int p;
    while(!feof(file_name1))
    {
        fscanf(file_name1,"%d",&p);
        if (p%5==0)
        {
            printf("%d\n",p);
            fprintf(file_name2,"%d\\n",p);
        }
        else
            continue;
    }
    fclose(file_name1);
}
