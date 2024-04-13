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
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("Negetive Elements From An Array : ");
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d ",a[i]);
        }
    }
}