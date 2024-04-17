#include<stdio.h>
#include<string.h>
main()
{   int n;
    int a[5] = {1,2,3,4,5};
    system("cls");
    printf("Enter number to find ");
    scanf("%d",&n);
    for(int i=0;i<5;i++)
    {
        if(n==a[i])
        {
            printf(" number = %d",a[i]);
        }
        else{
            printf(" number not found : ");
        }
    }


}    