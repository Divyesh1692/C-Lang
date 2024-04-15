#include<stdio.h>
main()
{
    char a[100];
    system("cls");
    printf("Enter Any String : ");
    scanf("%[^\n]",&a);
    for(int i=0; a[i]!=0; i++)
    {
        if(a[i] >= 97 && a[i]<= 122)
        {
            a[i]-=32;
        }
        else if(a[i]>=65 && a[i]<=90)
        {
            a[i]+=32;
        }
                
    }printf("%s",a);
}