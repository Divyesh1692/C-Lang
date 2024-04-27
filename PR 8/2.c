#include<stdio.h>
main()
{
    //int r= getint("row");
    //int c= getint("col");
    int a[2][2];
    int *ptr;
    int cube;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        cube=0;
        for(int j=0;j<2;j++)
        {
            *(ptr+i+j) = a[i][j];
            cube = *(ptr+i+j)**(ptr+i+j)**(ptr+i+j);
            printf("%d\t",cube);
        }
        printf("\n");
    }

}