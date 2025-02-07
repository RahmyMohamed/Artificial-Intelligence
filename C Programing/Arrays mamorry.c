#include<stdio.h>
int main ()
{
    int a [10],n,i;
    printf("Enter the number of inputs :");
    scanf("%d",&n);

    for (i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("The value in Array :\n");

    for (i=0;i<10;i++)
        printf("a[%d] = %d\n",i,a[i]);
    printf("Memory of a : %d",sizeof (a));
}
