#include<stdio.h>
int main()
{
    int a=1;
    do
    {
        printf("%d\n",a);
        ++a;
    }while (a<11);

    int b=10;
    do
    {
        printf("%d\n", b);
        --b;
    } while (b>0);

     return 0;
}
