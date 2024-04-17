#include<stdio.h>
main()
{
    int count,j,n=0;
    char str[10];
    system("cls");
    printf("Enter String : ");
    scanf("%s",&str);
    for(int i=0;str[i]!=NULL; i++)
    { n++; }
    for(int i=0;i<n; i++)
    {
        count = 1;
        for(j=i+1;j<n; j++)
        {
            if(str[j]==str[i])
            {
                count++;
                str[j]=0;
            }
        }
        if(str[i]!=0)
        {
        printf("%c : %d\n",str[i],count);
        }
    }


}