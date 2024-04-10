#include<stdio.h>

main()
{
    int n1,n2,n3;
    system("cls");
    printf("Enter Array A's Size : ");
    scanf("%d",&n1);
    int a[n1];
    printf("Enter Array A's Elements : \n");
    for(int i=0;i<n1;i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter Array B's Size : ");
    scanf("%d",&n2);
    int b[n2];
    printf("Enter Array B's Elements : \n");
    for(int i=0;i<n2;i++)
    {
        printf("b[%d] : ",i);
        scanf("%d",&b[i]);
    }
    n3=n1+n2;
    int c[n3];
    for(int i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<n1;i++)
    {
        c[n1+i]=b[i];
    }
    printf("Array C is : ");
    for(int i=0;i<n3;i++)
    {
        printf("%d ",c[i]);
    }
}
