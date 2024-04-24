#include"udf.c"
main()
{
    int *ptr;
    int n = getInt("Array Size");
    int a[n];
    ai(a,n);
    ptr = &a;
    printf("Square Of Each Element : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i)**(ptr+i));
    }

}