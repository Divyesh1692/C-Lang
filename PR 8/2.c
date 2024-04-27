#include"udf.c"
main()
{
    int r = getint("row");
    int c = getint("col");
    int a[r][c];
    arrayinput(a,r,c);
    cubeof(a,c,r);
    printf("Cube Of Matrix : \n");
    printarray(a,r,c);
}
