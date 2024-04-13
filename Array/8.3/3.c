#include<stdio.h>
main()
{
    int r,c,sum=0;
    system("cls");
    printf("Enter Row: ");
    scanf("%d",&r);
    printf("Enter Column : ");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter Array's Elements : \n");
    for(int i=0;i<r;i++)
    {   
        for(int j=0;j<c;j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);    
            if(i==j)
            {
                sum = sum+ a[i][j];
            } 
        }
    }
    printf("Sum of Diagonal : %d",sum);
}    


    

