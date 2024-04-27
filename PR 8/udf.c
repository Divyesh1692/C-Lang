#include<stdio.h>
void cube(int a)
{
    printf("Enter Number : ");
    scanf("%d",&a);
    printf("Cube Of %d is : %d\n",a,a*a*a);
}
int cubeof(int a)
{
    return a*a*a;
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
    printf("Sum Of %d and %d = %d\n",a,b,a+b);
}
void sub(int a,int b)
{
    int sub;
    printf("Enter Numbers : \n");
    scanf("%d %d",&a,&b);
    printf("Substraction Of %d and %d = %d\n",a,b,a-b);
    
}
void multi(int a,int b)
{
    int multi;
    printf("Enter Numbers : \n");
    scanf("%d %d",&a,&b);
    printf("Multiplication of %d and %d = %d\n",a,b,a*b);
}
void div(int a,int b)
{
    int div;
    printf("Enter Numbers : \n");
    scanf("%d %d",&a,&b);
    printf("Division of %d and %d = %d\n",a,b,a/b);
}
void mod(int a, int b)
{
    int mod;
    printf("Enter Numbers : \n");
    scanf("%d %d",&a,&b);
    printf("%d Modulus %d = %d\n",a,b,a%b);
}
int getint(char varName[])
{
    int n;
    printf("Enter %s: ", varName);
    scanf("%d", &n);
    return n;
}
int ae(char name[],int index)
{
    int n;
    printf("Enter %s[%d] : ",name,index);
    scanf("%d",&n);
    return n;
}
void ai(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        a[i]=ae("array",i);
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
    n++;
    return n;
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
int arraysum(int a[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("Array Sum Is : %d",sum);
}
void stringlen()
{
    int n=0;
    char str[100];
    printf("Enter String : ");
    scanf("%[^\n]",&str);
    for(int i=0; str[i]!='\0'; i++)
    {
        n++; 
    }
    printf("String Length is : %d",n);
}
void mathop(int n)
{
    int a,b;
    printf("\nPress 1 for +\n");
    printf("Press 2 for -\n");
    printf("Press 3 for *\n");
    printf("Press 4 for /\n");
    printf("Press 5 for %%\n");
    printf("Press 0 for Exit\n");
    printf("Enter Your Choice : ");
    scanf("%d",&n);
    switch(n)
    {
        case 1 : sum(a,b);
        mathop(n);
        case 2 : sub(a,b);
        mathop(n);
        case 3 : multi(a,b);
        mathop(n);
        case 4 : div(a,b);
        mathop(n);
        case 5 : mod(a,b);
        mathop(n);
        case 0 : break;
    }
}
void stringLength(char *ptr)
{
    int n=0;
    for(int i=0;*(ptr+i)!= NULL;i++)
    {
        n++;
    }
    printf("String Length = %d",n);


}
int arrayelement(char name[],int i,int j)
{
    int a[i][j];
    printf("Enter %s[%d][%d] : ",name,i,j);
    scanf("%d",&a[i][j]);
    return &a[i][j];
}
