#include<stdio.h>

int main()
{
    char a[9];
    printf("enter text");
    scanf_s("%s",a,sizeof(a));

    printf("a = %s",a);
}
