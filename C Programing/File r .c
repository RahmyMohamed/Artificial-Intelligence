#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;
    fp=fopen("my doc.txt","r+");

    printf("Enter Your Content: \n to stop enter Q: ");


    while(ch!=-1)
    {
        scanf("%c",&ch);
        if (ch!='Q')
            fputc(ch,fp);
        else
            break;
    }
    fclose(fp);
}
