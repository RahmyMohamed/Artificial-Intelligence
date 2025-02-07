#include <stdio.h>
int main ()

{
    int a =10;
    float b =10.50;
    double d =15.5265;
    short x = 32767;
    short signed y = 32767;
    short unsigned z = 65535;
    printf("a= %d\n",a);
    printf("a= %05d\n",a);//zeero flag length & precision
    printf("a= %i\n",a);
    printf("a= %f\n",b);
    printf("octal of a = %o\n",a);
    printf("Hexadecimal of a = %X\n",a);
    printf("Hexadecimal of a = %#X\n",a);
    printf("a= %f\n",d);
    printf("b value = %E\n",b);
    printf("short data x = %d\n", x);
    printf("short data y = %d\n", y);
    printf("short data z = %d\n", z);
}
