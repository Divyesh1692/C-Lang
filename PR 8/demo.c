#include<stdio.h>
main()
{
    int a[3][3];
    int *ptr[3][3];
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);

        }
    }
    ptr[0][0] = &a[0][0];
    printf("Cube of all Elements : \n");
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            *ptr[i][j]= &a[i][j];
            int cube = *ptr[i][j]**ptr[i][j]**ptr[i][j];
            printf("%d",cube);

        }
        printf("\n");
    }

}