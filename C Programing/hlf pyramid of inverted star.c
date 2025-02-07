#include <stdio.h>

int main()
{
    int rows,r,s;
    printf("Enter The Number Of Rows:");
    scanf("%d",&rows);

    for (r=rows;r>=1;r--)
    {
     for (s=1;s<=r;s++)
     {
        printf("*");
     }
        printf("\n");
    }
}
