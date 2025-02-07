#include<stdio.h>
int main()
{
  int a=3,b=5,c=7,i;
  int *ptr[3];
  *ptr=&a;
  ptr[1]=&b;
  ptr[2]=&c;

  printf("&a = %d\n",,&a);
  printf("&b = %d\n",,&b);
  printf("&c = %d\n",,&c);

  printf("ptr[0] = %d\n",ptr[0]);
  printf("ptr[1] = %d\n",ptr[1]);
  printf("ptr[2] = %d\n",ptr[2]);

  printf("*ptr[0] = %d\n",*ptr[0]);
  printf("*ptr[1] = %d\n",*ptr[1]);
  printf("*ptr[2] = %d\n",*ptr[2]);

  printf("&ptr[0] = %d\n",&ptr[0]);
  printf("&ptr[1] = %d\n",&ptr[1]);
  printf("&ptr[2] = %d\n",&ptr[2]);

  printf("ptr = %d\n",ptr);



   /* int a=3,b=5,c=7,i;
    int *ptr[3];
    ptr[0]=&a;
    ptr[1]=&b;
    ptr[2]=&c;

    printf("%p\n",ptr[0]);
    printf("%d\n",*ptr[0]);

    for (i=0;i<3;i++)
        printf("%d\n",*ptr[i]);*/

}
