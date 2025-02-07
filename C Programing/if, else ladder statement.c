#include<stdio.h>

int main()

{
    int number;
    printf("Enter a Number:");
    scanf("%d", &number);
    if(number>0)
{
        if (number>100)
        {
    printf("Greater than 100\n");
        }

    else if (number<100)
        {
        printf("Less than 100\n");
        }
    else
        {
        printf("100\n");
        }
}
    else if (number<0)
        printf("Nagative number\n");

    else
        printf("Zero");

}
