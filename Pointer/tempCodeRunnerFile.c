#include"udf.c"
main()
{
    int a = getInt("a");
    int b = getInt("b");
    printf("Before Swapping a=%d and b=%d\n",a,b);
    swap(a,b);
    printf("%d %d",a,b);
}