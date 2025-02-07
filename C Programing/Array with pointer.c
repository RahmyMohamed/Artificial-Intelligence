#include<stdio.h>
int main()
{
 int a[5]={10,20,30,40,50,},i;
 int *b;

 b=a;

 for (i=0;i<5;i++)
   printf("%d\n",b+i);

 for (i=0;i<5;i++)
    printf("%d\n",*(b+i));



 /*int x[5]={1,2,3,4,5};
 int *ptr;
 ptr=&x[2];

 printf("*ptr=%d\n",*ptr);
 printf("*(ptr+1)=%d\n",*(ptr+1));
 printf("*(ptr-1)=%d",*(ptr-1));

 return 0;*/



 /*int a[5]={10,20,30,40,50},i ;
    int *b;
    b=a;

    for (i=0;i<5;i++)
        printf("%d\n", *b++);*/



  /*  int a[5]={10,20,30,40,50},i ;
    int b[5];

    for (i=0;i<5;i++)
        b[i]=a[i];

    for (i=0;i<5;i++)
        printf("%d\n",b[i]);*/


  /*int a [5],i;
   for (i=0;i<5;i++)
    scanf("%d",&*(a+i));
   for (i=0;i<5;i++)
    printf("%d %d\n",a[i],*(a+i));*/


    /*int a[5]={10,20,30,40,50};
    printf("%d\n",&a[0]);
    printf("%p\n",a[1]);
    printf("%d\n",&a[2]);
    printf("%p\n",&a[3]);
    printf("%d\n",&a[4]);
    printf("%*p\n",a);*/
}
