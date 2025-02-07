#include<stdio.h>
void fun()
{
    static int y = 0;// static fun vanthu aduthu aduthu vare fun ku palaye value vode 1 kooti kondu varum
    y= y+1;
    printf("y=%d\n",y);

    auto int y = 0;// auto fun narmal fun programing le varvathu
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
