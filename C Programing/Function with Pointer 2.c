#include<stdio.h>


void upper_case(char *string);
int to_upper(char c);
int to_upper(char c);

void upper_case(char *string)
{
    printf("string received is: %s\n",string);
    for (int i=0;i<sizeof(string);i++)
    {
        if (to_upper(string [i]))
        {
            continue;
        }
        else if(to_lower(string[i]))
        {
            string[i]=string[i]-32;
        }
    }
}
int to_upper(char c)
{
     if(c>=65 && c<=90)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int to_lower(char c)
{
    if(c>=97 && c<=122)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main ()
{
    char s[100];
    printf("Enter a word:");
    scanf("%s",s);
    printf("The string is stored at %d\n %d\n",s,&s[0]);
    printf("letters in s : %s\n",s);
   upper_case(s);
   printf("Upper Case Letter is: %s\n",s);

}


