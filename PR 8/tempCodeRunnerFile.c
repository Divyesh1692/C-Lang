#include"udf.c"
main()
{
    int r = getint("row");
    int c = getint("col");
    int a[r][c];
    int *ptr;
    arrayinput(a,r,c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            *(ptr+i+j) = &a[i][j];
            a[i][j] = cubeof(*(ptr+i+j));
        }
    }
    printarray(a,r,c);
}