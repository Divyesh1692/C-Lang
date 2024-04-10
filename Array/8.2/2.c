#include<stdio.h>

main()
{
    int n1,n2,n=0;
    system("cls");
    printf("Enter First Number : ");
    scanf("%d",&n1);
    printf("Enter Second Number : ");
    scanf("%d",&n2);
    int a[n];
    for(int i=n1;i<=n2;i++)
    {
        if(i%4==0)
        {
            a[n]=i;
            n++;
        }
    }
    printf("The Array Is : ");
    for(int j=0;j<n;j++)
    {
        printf("%d ",a[j]);
    }

}