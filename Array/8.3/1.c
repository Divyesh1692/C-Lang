#include<stdio.h>
main()
{
    int r,c,sum=0,n=0;
    float avg;
    system("cls");
    printf("Enter Array's Row Size: ");
    scanf("%d",&r);
    printf("Enter Array's Column Size : ");
    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {   
        for(int j=0;j<c;j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);     
            sum = sum + a[i][j];
            n++;
        }
    }
    avg = (float)sum/(float)n;
    printf("Average Of an Array : %.2f",avg);
} 