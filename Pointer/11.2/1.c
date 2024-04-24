#include "udf.c"
main()
{
    int n = getInt("Array Size");
    int a[n];
    ai(a,n);
    arrayrev(a,n);
    ad(a,n,"Reversed Elements");

}