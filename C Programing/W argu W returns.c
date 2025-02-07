#include<stdio.h>
int add (int,int);
void main()
{
    int a=10, b=12, c;
    c= add (a,b);
    printf("%d",c);

}
int add (int m,int n)
{
    int x;
    x= m+n;
    return x;
}
