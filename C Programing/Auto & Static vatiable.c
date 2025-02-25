#include<stdio.h>
void fun()
{
    static int y = 0;
    y= y+1;
    printf("y=%d\n",y);

    auto int y = 0;
    y= y+1;
    printf("y=%d\n",y);
}
int main()
{
    fun ();
    fun ();
    fun ();

    return 0;
}
