#include<stdio.h>
int main()

{
    int raws,a,b;

    printf("How Many Raws Do You Want? ");
     scanf("%d",&raws);

    for(a=raws;a>=1;a--)
    {
      for(b=1;b<=a;b++)
       {
        printf("%d",b);
       }
    printf("\n");

    }

}
