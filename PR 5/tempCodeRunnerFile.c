#include<stdio.h>
main()
{
    int r,c,sum=0,n;
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
    printf("Enter Row Number : ");
    scanf("%d",&n);
    printf("Elements Of Row %d : ",n);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==n)
            {   
                printf("%d ",a[i][j]);
                sum+=a[i][j];
            }
        }
    }
    printf("\nSum Of Row %d : %d\n",n,sum);
    printf("\nEnter Column Number : ");
    scanf("%d",&n);
    sum=0;
    printf("Elements Of Column %d : ",n);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        { 
            if(j==n)
            {
                printf("%d ",a[i][j]);
                sum+=a[i][j];
            }
        }
    }
    printf("\nSum Of Column %d : %d",n,sum);
    
}