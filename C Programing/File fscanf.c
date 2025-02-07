#include<stdio.h>

int main()
{
    FILE *fp;
    char c[255],c1[255];
    int i,n,m;

    fp=fopen("my doc2.txt","r");


    while (fscanf(fp,"%d %s %d %s %d\n",&i,c,&n,c1,&m)!=EOF)
    {
        printf("%d %s %d %s %d\n",i,c,n,c1,m);
    }

    fclose(fp);
    return 0;

}
