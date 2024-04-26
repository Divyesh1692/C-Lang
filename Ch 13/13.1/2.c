#include<stdio.h>
main()
{
    int n = 50;
    FILE *fp = fopen("Numbers Divisible by 3&5.xls","w");
    fprintf(fp,"Numbers Divisible By Both 3 & 5 Between 1 To 50\n");
    for(int i = 1; i<=50; i++)
    {
        if(i%3 == 0 && i%5 == 0)
        {
            fprintf(fp,"%d\n",i);
        }
    }
    fclose(fp);


}