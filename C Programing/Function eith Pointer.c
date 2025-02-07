#include<stdio.h>
int is_even(int num);

int is_even(int num)
{
    if(num%2==0)
    {
        return 1;
    }
    else
{
        return 0;
}
}

int main()
{
    int n;
    while (1){
    int result;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n==0)
    {
        break;
    }
    result = is_even(n);
    printf("Result is %d\n",result);
    if(is_even(n))
    {
        printf("The number is an even number\n");
    }
    else
    {
        printf("It is an Odd number\n");
    }
    }
}



