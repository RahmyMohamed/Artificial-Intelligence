#include<stdio.h>
 int main ()

 {
     int number;
     printf("enter your number:");
     scanf("%d",&number);

     if(number>=10)
     {
         if (number<10)
            printf("number within 0...9\n");

         else
            printf("not within 0...9\n");
     }

     else
        printf("Given number is Negative number\n");
 }
