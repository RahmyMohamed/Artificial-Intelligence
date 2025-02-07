/*#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for (i=rows;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/

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
