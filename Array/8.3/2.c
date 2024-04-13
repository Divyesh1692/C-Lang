#include<stdio.h>
main()
{
    int r,c;
    system("cls");
    printf("Enter Row: ");
    scanf("%d",&r);
    printf("Enter Column : ");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter Array A's Elements : \n");
    for(int i=0;i<r;i++)
    {   
        for(int j=0;j<c;j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);     
        }
    }
    int b[r][c];
    int d[r][c];
    printf("Enter Array B's Elements : \n");
    for(int i=0;i<r;i++)
    {   
        for(int j=0;j<c;j++)
        {
            printf("b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]); 
            d[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Array C is : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }

    
} 
