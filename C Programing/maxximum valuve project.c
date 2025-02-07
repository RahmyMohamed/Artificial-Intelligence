#include<stdio.h>
int main ()

{
    int i,a[30];
    int qt,max;

    printf("Enter Your Quantity");
    scanf("%d",&qt);

    for (i=0;i<qt;i++)

    {
        printf("Enter your Data");
        scanf("%d",&a[i]);
    }
max=a[0];

    for (i=0;i<qt;i++)
        if (max<a[1])
    {
        max=a[1];
    }

    {
     printf("value of max is %d\n",max);
    }


}
