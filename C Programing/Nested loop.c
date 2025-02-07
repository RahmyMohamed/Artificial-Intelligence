#include<stdio.h>

int main ()

{
    int i,j;
    for (i=1;i<=5;i++)
         {
             for (j=1;j<=2;j++)
             {
                 printf("i= %d\n j= %d\n", i,j);
                 printf("i*j= %d\n", i*j);
             }
         }
}
