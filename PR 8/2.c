#include"udf.c"
main()
{
    int r = getint("row");
    int c = getint("col");
    int a[r][c];
    arrayinput(a,r,c);
    cubeofae((int *)a,r,c);

}