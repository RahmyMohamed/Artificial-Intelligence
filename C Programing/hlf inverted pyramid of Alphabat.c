#include<stdio.h>

int main()
{
    int a,b;
    char c='A';

    for (a=6;a>=1;a--)
    {
      for (b=1;b<=a;b++)
        {
          printf("%c ", c++);
        }
      printf("\n");
    }
}
