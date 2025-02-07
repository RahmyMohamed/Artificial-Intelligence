#include<stdio.h>

int main ()

{
    int i,a[5];

for (i=0;i<5;i++)
   {
    printf("Enter your answer:");
    scanf("%d",&a[i]);
   }
    for (i=0;i<5;i++)
     {
       printf("value of a is %d\t",a[i]);
     }
}
