#include<stdio.h>

int main()

{
    int number;
    printf("Enter a Number:");
    scanf("%d", &number);
    if(number<0)
    {
        printf("Given number is a -ve number\n");
    }
}
