#include<stdio.h>
int main()
{
  int arr[5]={10,20,30};
  int *p=arr;
  int (*ptr)[5]=&arr;
  printf("%d\n",p);
  printf("%d\n",ptr);
  printf("%d\n",*p);
  printf("%d\n",*ptr);

  printf("arr[0]= %d\n",arr[0]);
  printf("arr[1]= %d\n",arr[1]);
  printf("arr[2]= %d\n",arr[2]);

  printf("ptr[0]= %d\n",&ptr[0]);
  printf("ptr[1]= %d\n",&ptr[1]);
  printf("ptr[2]= %d\n",&ptr[2]);
}
