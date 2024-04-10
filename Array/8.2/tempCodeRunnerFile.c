#include<stdio.h>

main()
{
    int n;
    system("cls");
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Array Elements : \n");
    for(int i=0;i<n;i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("the Squares Are : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]*a[i]);
    }
}