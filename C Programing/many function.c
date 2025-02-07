#include<stdio.h>

int add1()
{
    int x,y=10;
    x=y+30;
    printf("x=%d\n",x);
}
int add2()
{
    int a,b=50;
    a=b*10;
    printf("a=%d\n",a);
}
int add3()
{
    int r,s=100;
    r= s-50;
    printf("r=%d\n", r);
}

int main()
{
add1();
add2();
add3();

return 0;
}
