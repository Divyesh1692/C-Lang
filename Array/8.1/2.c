#include <stdio.h>
main()
{
    int n;
    double sum, avg;
    system("cls");
    printf("Enter Array Size : ");
    scanf("%d", &n);

    int a[n];
    printf("enter Array Elements : \n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d", &a[i]);
        sum+=a[i];
        avg=sum/n;
    }

    printf("Average of Array is : %.2f ",avg);
}