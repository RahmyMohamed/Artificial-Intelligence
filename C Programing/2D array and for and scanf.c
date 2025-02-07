#include<stdio.h>

int main ()

{
    int r,s,a[3][5];

for (r=0;r<3;r++)

   {

   for (s=0;s<5;s++)
   {
    printf("Enter your answer:");
    scanf("%d",&a[r][s]);
   }
   }

for (r=0;r<3;r++)
   {
   for (s=0;s<5;s++)
   {
       printf("value of a is %d\n",a[r][s]);
   }
   }
}
