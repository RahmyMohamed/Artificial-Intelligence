#include<stdio.h>
#include<stdlib.h>

int main()

{
    char choise;
    char senior;
    char normal;
    char child;

    printf("Select your catagarie in this list\n\n 1.Senior Citizen\n 2. Normal Age\n 3. child\n 4. Exit\n\n");

    printf("Enter Your Choise:");
    scanf("%d",&choise);

    switch(choise)

    {

    case 1:
        printf("Enter Your Age:");
        scanf("%d",&senior);

        if (senior>=60)
        {
            printf("Ticket Booked With Concession\n");
        }
        else
        {
            printf("\nSorry Your age is not valid for senior categarie\n");
        }
        break;

    case 2:
        printf("Enter Your Age:");
        scanf("%d",&normal);


        if (normal<60&&normal>=25)
        {
            printf("Normal ticket booking\n");
        }
        else
        {
            printf("\nSorry Your age is not valid for normal categarie\n");
        }
        break;

    case 3:
        printf("Enter Your Age:");
        scanf("%d",&child);

        if (child<25&&child>=4)
        {
            printf("Ticket fair for child\n");
        }
        else
        {
            printf("\nSorry Your age is not valid for child categarie\n");
        }
        break;

    case 4:
        exit(0);

    default :
        printf("Please enter between 1 to 4\n");
        break;
    }
}
