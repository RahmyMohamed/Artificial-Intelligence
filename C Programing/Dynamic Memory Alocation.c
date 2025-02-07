#include<stdio.h>
#include<stdlib.h>
int main()

{
    int *ptr,i,n;
    printf("Enter the value of input :");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    printf("ptr=%p\n",ptr);

    for(i=0;i<n;i++)
        scanf("%d",&ptr[i]);
    for(i=0;i<n;i++)
        printf("ptr[%d] = %d\n",i,&ptr[i]);
}
