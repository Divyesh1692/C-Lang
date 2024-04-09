#include <stdio.h>
main()
{
    int n;
    system("cls");
    printf("Enter Array Size : ");
    scanf("%d", &n);

    int a[n];
    printf("enter Array Elements : \n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d", &a[i]);
    }

    printf("Length of array is : %d ",n);
}