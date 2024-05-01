#include<stdio.h>
#include<string.h>
void checkstr(char str[])
{
int n,count;
n = strlen(str);
for(int i=0;i<n;i++)
    {
        if(str[i]!='a'&&str[i]!='A'&&str[i]!='e'&&str[i]!='E'&&str[i]!='i'&&str[i]!='I'&&str[i]!='o'&&str[i]!='O'&&str[i]!='u'&&str[i]!='U')
        {
            count =1;
        for(int j=i+1;j<n;j++)
        {
            if(str[j]==str[i])
            {
                count ++;
                str[j]=0;
            }
            
        }
        if(str[i]!=0)
            {
                printf("%c Occurres %d Times\n",str[i],count);
            }
        }
    }
}
void checknum(int n)
{
    if(n%3==0&& n%5==0)
    {
        printf("Number is Divisible By 3 & 5");
    }
    else{ printf("Number is not Divisible by 5 & 3");}
}