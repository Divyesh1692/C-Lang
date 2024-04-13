#include<stdio.h>
main()
{
    int r=5,c=5,sum=0;
    system("cls");
    int a[r][c];
    printf("Enter Array's Elements : \n");
    for(int i=0;i<r;i++)
    {   
        for(int j=0;j<c;j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);     
        }
    }
    printf("\nBorder Elements : \n");
    for(int i=0;i<r;i++)
    {   
        for(int j=0;j<c;j++)
        {
            if(i==0||i==r-1||j==0||j==c-1)
            {
                printf("%d ",a[i][j]);
                sum += a[i][j];
            } 
            else { printf("  ");}
        }
        printf("\n");
    } 
    printf("Sum Of Border Elements : %d",sum);   
} 
