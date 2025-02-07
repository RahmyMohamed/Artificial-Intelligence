#include<stdio.h>

int main()
{
    FILE *fp;
    char c='x',c1='=';
    int i,n=2;

    fp=fopen("my doc2.txt","w");
    printf("Enter Your Content: \n to stop enter Q: ");

    for(i=1;i<16;i++)
    {
        fprintf(fp,"%d %c %d %c %d\n",i,c,&n,c1,&m);
    }
    fclose(fp);
    return 0;

}
