#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1;
    int num2;
    char op;

    printf("Enter First num1:");
    scanf("%d",&num1);

    printf("Enter Second num2:");
    scanf("%d",&num2);

    printf("Enter oparator");
    scanf("\n%c",&op);

    switch (op)
{
case '+':
    printf("%d",num1+num2);
    break;

case '-':
    printf("%d",num1-num2);
    break;

case '*':
    printf("%d",num1/num2);
    break;

case '/':
    printf("%d",num1*num2);
    break;

default :
    printf("Invalid oparator");
}
}
