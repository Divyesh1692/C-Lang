#include<stdio.h>
void cube(int a)
{
    printf("Enter Number : ");
    scanf("%d",&a);
    printf("Cube Of %d is : %d\n",a,a*a*a);
}
void check(int a)
{
    printf("Enter Number : ");
    scanf("%d",&a);
    if(a%3==0 && a%5 ==0)
    {
        printf("%d is Divisible by 3 and 5 Both",a);
    }
    else{ printf("%d is not Divisible By 3 and 5 Both",a);}
}
void sum(int a,int b)
{
    int sum;
    printf("Enter Numbers : \n");
    scanf("%d %d",&a,&b);
    printf("Sum Of Given Numbers Is : %d",a+b);
}
void sub(int a,int b)
{
    int sub;
    printf("Enter Numbers : \n");
    scanf("%d %d",&a,&b);
    printf("Substraction Of Given Numbers is : %d",a-b);
    
}
void multi(int a,int b)
{
    int multi;
    printf("Enter Numbers : \n");
    scanf("%d %d",&a,&b);
    printf("Multiplication of Given Numbers : %d",a*b);
}
void div(int a,int b)
{
    int div;
    printf("Enter Numbers : \n");
    scanf("%d %d",&a,&b);
    printf("Division of Given Numbers : %d",a/b);
}
int getint(char varName[])
{
    int n;
    printf("Enter %s: ", varName);
    scanf("%d", &n);
    return n;
}
int ae(char a[],int n)
{
    int e;
    printf("Enter %s[%d] : ",a,n);
    scanf("%d",&e);
    return e;
}
void ai(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        a[i]=ae(a,i);
    }
}
void ad(int a[], int n)
{
    printf("Array Elements : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int ain(int a[], int n)
{
    int pos, val;
    printf("Enter the positin to insert: ");
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &val);
    for(int i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=val;
    ad(a,n+1);
}
void checkoddeven(int a)
{
    if(a%2==0)
    {
        printf("%d is Even\n",a);
    }
    else{ printf("%d is Odd\n",a);}
}
void multitable(int a)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d \t= %d\n",a,i,a*i);
    }
}