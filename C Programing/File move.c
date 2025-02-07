#include<stdio.h>
int main()
{
    FILE *src,*des;
    char ch;
    int re;

    char srcf[50],desf[50];
    printf("Enter the sours file with extension:");
    scanf("%s",srcf);
    printf("Enter the destination file with extension:");
    scanf("%S",desf);

    src=fopen(srcf,"r");
    des=fopen(desf,"w");

    if(!src)
    {
        printf("Sours does not exist\n");
    }
        else
        {
            while((ch=fgetc(src))!=EOF)
            {
                fputc(ch,des);
            }
            fclose(src);
            fclose(des);
            printf("File is copied");
        }
            re = remove(srcf);
    printf("re = %d",re);

    if(!re)
        printf("File is deleted");
    else
        printf("file not deleted");
}
