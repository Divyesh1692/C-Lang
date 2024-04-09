#include <stdio.h>
main()
{
    int n,sum=0,avg;
    system("cls");
    printf("Enter Array Size : ");
    scanf("%d", &n);

    int a[n],b[n],c[n];
    printf("enter Array A's Elements : \n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d", &a[i]);
    }
    printf("enter Array B's Elements : \n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d", &b[i]);
    }
    printf("Array C's Elements : \n");
    for (int i = 0; i < n; i++)
    {
        c[i]=a[i]+b[i];
        printf("a[%d] : %d \n",i,c[i]);
    }
    
}