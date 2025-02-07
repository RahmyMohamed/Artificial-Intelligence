#include<stdio.h>
int main ()

{
    int p,q,r,a[2][3][4];

    for (p=0;p<2;p++)
    {
        for (q=0;q<3;q++)
{
        printf("Enter data:");
        scanf("%d",&a[p][q]);
}
        for (r=0;r<4;r++)
{
        printf("Enter data:");
        scanf("%d",&a[p][q][r]);
}
    }

    for (p=0;p<2;p++)
    {
        for (q=0;q<3;q++)
{
            printf("value of a is %d\n",a[p][q]);
}
        for (r=0;r<4;r++)

        {
            printf("value of a is %d\n",a[p][q][r]);
        }
    }
}
