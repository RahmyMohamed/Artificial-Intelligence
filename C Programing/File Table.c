#include<stdio.h>

int main()
{
    FILE *fp;
    char c='x',c1='=';
    int i,n=2;


    fp=fopen("my doc2.txt","w");

    for(i=1;i<16;i++)
    {
        fprintf(fp,"%d %c %d %c %d\n",i,c,n,c1,i*n);
    }
    fclose(fp);
    return 0;

}
