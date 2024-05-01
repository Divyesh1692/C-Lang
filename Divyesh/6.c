#include<stdio.h>
struct mobile
{
    char company_name[20];
    char color[10];
    char model[10];
    int price;
};

main()
{
    int n;
    printf("Enter How Many Mobile Data You Want To Enter : ");
    scanf("%d",&n);
    struct mobile m[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter Company Name : ");
        scanf("%s",&m[i].company_name);
        printf("Enter Color : ");
        scanf("%s",&m[i].color);
        printf("Enter Model : ");
        scanf("%s",&m[i].model);
        printf("Enter Price : ");
        scanf("%d",&m[i].price);
        
    }
    system("cls");
    printf("Mobile Data : \n");
    for(int i=0;i<n;i++)
    {
        printf("\nCompany Name : %s\n",m[i].company_name);
        printf("Color : %s\n",m[i].color);
        printf("Model : %s\n",m[i].model);
        printf("Price : %d\n",m[i].price);
    }

}