#include<stdio.h>
#include<stdlib.h>
int main()

{
    int *ptr,i;
  // printf("Enter the value of input :");
   //scanf("%d",&n);
    ptr=(int *)malloc(5*sizeof(int));
    printf("ptr=%p\n",ptr);

    free (ptr);

    int *ptr1 =(int*)calloc(5,sizeof(int));
    printf("ptr1=%p\n",ptr1);

   //for(i=0;i<n;i++)
      //scanf("%d",&ptr[i]);
   //for(i=0;i<5;i++)
      //printf("p[%d] = %d\n",i,ptr[i]);
}
