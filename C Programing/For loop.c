#include<stdio.h>
#include<string.h>
int main ()
{
    char s [10];
    int sl;

    printf("Enter Your Name:");
    scanf("%s",s);
    sl = strlen(s);
    while(sl>0)
    {
        printf("Times of letters \n");
        sl=sl-1;
    }
}
