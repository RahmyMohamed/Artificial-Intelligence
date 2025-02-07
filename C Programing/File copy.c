#include<stdio.h>
int main()
{
    FILE *src,*des;
    char ch;

    src=fopen("my doc2.txt","r");
    des=fopen("my doc.txt","w");

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
            printf("File is cpoied");
        }
}
