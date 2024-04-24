#include"udf.c"
main()
{
    int *ptr;
    int *bb;
    int a = getInt("a");
    int b = getInt("b");
    printf("Before Swapping a=%d and b=%d\n",a,b);
    ptr = a;
    a = b;
    bb = &ptr;
    printf("After Swapping a=%d and b=%d",a,*bb);

}    