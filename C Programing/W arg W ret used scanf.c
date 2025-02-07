#include<stdio.h>
int add(int,int,int);
void main()
{
    int a,b,c ;
    printf("Type Your First Value:");
    scanf("%d", &a);
    printf("Type Your Second Value:");
    scanf("%d", &b);
    printf("Type Your Third Value:");
    scanf("%d", &c);

    return 0;
}
int add (int w,int x,int y)
{
    int z;
    z = w+x+y;
    printf("the value z is :%d", z);
}

