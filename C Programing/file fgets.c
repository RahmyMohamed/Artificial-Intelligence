#include<stdio.h>
int main()
{
    FILE *fp;
    char ch[10];

    fp=fopen("For loop.c","r");
    while (!feof(fp))
    {
        fgets(ch,10,fp);
        printf("%s",ch);
    }
    fclose(fp);
}
