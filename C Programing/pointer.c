#include<stdio.h>
int main()
{
    int i=10;
    int *t=&i;

    printf("int i has value %d \n stored in address %p",i,&i);
    printf("\n int* t has value %d \n stored in address %p\n refer to %d",t,&t,*t);
}
