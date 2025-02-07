#include<stdio.h>
#include<conio.h>
int main()
{
    char mars[]= "marshhtech";
    char mars1[]="MarshhTech";
    char mars2[]={'M','A','R','S','H','H','T','E','C','H','\0'};
    char mars3[]={'M','A','R','S','H','H','T','E','C','H','\0'};

    for (int i= 0; i<sizeof (mars);i++)
    {
        printf("mars[%d]= '%c::%d' stored at %p \n",i,mars[i],mars[i],&mars[i]);
    }
    for (int i= 0; i<sizeof (mars1);i++)
    {
        printf("mars1[%d]= '%c::%d' stored at %p \n",i,mars1[i],mars1[i],&mars1[i]);
    }
    for (int i= 0; i<sizeof (mars2);i++)
    {
        printf("mars2[%d]= '%c::%d' stored at %p \n",i,mars2[i],mars2[i],&mars2[i]);
    }
    for (int i= 0; i<sizeof (mars3);i++)
    {
        printf("mars3[%d]= '%c::%d' stored at %p \n",i,mars3[i],mars3[i],&mars3[i]);
    }


    printf("\n mars: %s",mars);
	printf("\n mars 1: %s", mars1);
    printf("\n mars 2: %s",mars2);
    printf("\n mars 3: %s",mars3);
}
