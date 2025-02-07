#include<stdio.h>

int main()

{
    int a[10],i;
    int n,sum=0;
    printf("Enter the number of input values (less or equal to 10):");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter a value:");
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum of given numbers:\n");
    for (i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\nSum of %d nos. : %d\n",n,sum);
}
