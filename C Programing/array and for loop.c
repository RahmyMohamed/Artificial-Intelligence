#include<stdio.h>

int main()

{
    int i,a[2][3][4]={{{20,50,21,76},
                    {34,78,67,45},
                    {28,45,10,12}},
                   {{69,34,27,56},
                    {47,27,68,75},
                    {24,42,23,55}}};

   for (i=0;i<=4;i++)

       printf("value of a is %d\t",a[i]);

}
