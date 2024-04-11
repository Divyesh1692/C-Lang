#include<stdio.h>
main()
{
    int a,e;
    system("cls");
    printf("Enter How Many 1D Array You Want: ");
    scanf("%d",&a);
    printf("Enter How Many Elements You Want : ");
    scanf("%d",&e);
    int b[a][e];
    for(int i=0;i<a;i++)
    {   
        printf("enter array %d elements : \n",i+1);
        for(int j=0;j<e;j++)
        {
            printf("b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);     
        }
    }
    printf("2D Array :  \n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<e;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
} 
