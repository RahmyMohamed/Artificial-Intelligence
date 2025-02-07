#include<stdio.h>

int main()

{
    int number;
    printf("Enter a Number:");
    scanf("%d", &number);
    if(number%2==0)

        printf("Given number is a even number\n");

    else

        printf("Given number is a odd number\n");

}

                       //or

 #include<stdio.h>

int main()

{
    int number, reminder;
    printf("Enter a Number:");
    scanf("%d", &number);
    reminder=number%2;
    if(reminder==0)

        printf("Given number is a even number\n");

    else

        printf("Given number is a odd number\n");
}
