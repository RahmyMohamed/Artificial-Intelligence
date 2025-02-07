#include<stdio.h>
 int main ()

 {
     int result;
     printf("enter your result:");
     scanf("%d",&result);
{
     if (result>=85 && result<100)
        printf ("A");

     else if (result>=75 && result<85)
        printf ("B");

     else if (result>=65 && result<75)
        printf ("C");

     else if (result>=45 && result<65)
        printf ("S");

     else if (result>=0 && result<45)
        printf ("W");
     else
        printf ("invalid num");
}
 }
