#include<stdio.h>
void func1 ();

void func1 ()// definition function
{
    int y=5;
    y=y+1;
    printf("y=%d\n",y);
}

int main ()// call function
{
    func1 ();
}
