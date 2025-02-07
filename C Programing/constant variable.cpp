#include<stdio.h>

#define AB 5

void fun ()
{
    int x = AB * 100;
    printf ("x %d\n",x);
}
#undef AB

int main()

{
    fun ();
}
