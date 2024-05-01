#include<stdio.h>
main()
{
    char s[100];
    printf("Enter Sentence : ");
    scanf("%[^\n]",&s);
    FILE *f1 = fopen("test.txt","w");
    fprintf(f1,"%s",s);
    FILE *f2 = fopen("Test_2.txt","w");
    if(f2!=NULL)
    {
        fprintf(f2,"%s",s);

    }

    fclose(f1);
    fclose(f2);
}