#include"udf.c"
main()
{
    int row= getint("row");
    int col= getint("col");
    int a[row][col];
    int *ptr;
    int cube;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Cube Of Matrix : \n");
    ptr = &a;
    for(int i=0;i<row;i++)
    {
        cube=0;
        for(int j=0;j<col;j++)
        {
            *(ptr+i+j) = a[i][j];
            cube = *(ptr+i+j)**(ptr+i+j)**(ptr+i+j);
            printf("%d\t",cube);
        }
        printf("\n");
    }

}