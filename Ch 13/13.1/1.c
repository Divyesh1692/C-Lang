#include<stdio.h>
main()
{
    FILE *fp = fopen("data.xls","w");
    fprintf(fp,"Name\tGrID\tCourse\n");
    fprintf(fp,"Divyesh\t7763\tFull Stack Development");
    fclose(fp);

}