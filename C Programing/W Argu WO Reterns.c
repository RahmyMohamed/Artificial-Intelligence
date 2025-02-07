#include<stdio.h>
int add(int,int);
void main()
{
    int a,b;
    printf("chose your a numbers:");
    scanf("%d",&a);
    printf("chose your b numbers:");
    scanf("%d",&b);
    add(a,b);

    return 0;
}
int add(int x, int y)
{
    int z;
    z= x*y;
    printf("%d", z);


}
