#include<stdio.h>

int sqr (int x) //local variable & parameter
{
    int sq;
    sq = x * x;
    return sq;
}
int main ()
{
    int  n;
    printf("Enter the input:");
    scanf("%d", &n);
    printf("Square of %d", sqr (n));

    return 0;
}
