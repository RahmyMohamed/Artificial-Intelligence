#include<stdio.h>
int main()
{
    int re;
    re = remove("my doc.txt");
    printf("re = %d",re);

    if(re==0)
        printf("File is deleted");
    else
        printf("file not deleted");
}
