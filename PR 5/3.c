#include<stdio.h>
main()
{
    int r,c;
    system("cls");
    printf("Enter Array Row & Column Size : \n");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter Array Elements : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose Matrix : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    
}