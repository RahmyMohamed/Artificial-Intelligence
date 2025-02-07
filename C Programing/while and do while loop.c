#include<stdio.h>
int main ()

{
    int n=0;
    while (n>0)
    {
        printf("from While loop\n");
    }
    do
    {
        printf("from do while loop\n");
    }
    while(n>0);
}

              //or

/*int n=0,x=2;

while ((n>0)||(x=>0))
{
    printf("from while loop\n");
    --n;
}  do
{
    prontf("from do while loop\n");

}while (n>0);*/
