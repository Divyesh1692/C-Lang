#include<stdio.h>
int main()
{
    
    int n,a;
    char str[20];
    system("cls");
    printf("Enter String : ");
    scanf("%[^\n]",&str);
    for(int i=0;str[i]!= NULL; i++)
    {
        n=i;
    }
    a=0;
    for(int i=0;i<n;i++)
    {
        if(str[i] != str[n-i])
        {
            a=1;
                 }
    }
    if(a==0)
    {
        printf("Palindrom");
    }
    else { printf("Not Palindrom"); }
    return 0;
}