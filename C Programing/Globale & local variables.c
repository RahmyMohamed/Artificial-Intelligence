#include<stdio.h>

int z = 2000; // this is a global variable ella fun kum work aahum
int add1()
{
    int x,y=10;
    x=y+z;
    printf("x=%d\n",x);
}
int add2()
{
    int a,b=50;
    a=b*z;
    printf("a=%d\n",a);
}
int add3()
{
    int r,s=100;
    r= s-z;
    printf("r=%d\n", r);
}

int main()
{
add1();
add2();
add3();

return 0;
}
