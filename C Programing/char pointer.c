 #include<stdio.h>
 int main()
 {
      char a[]="Cyber Cecurity";
      char b[]="Artificial Intelligent";
      char *p= a;
      char *q= b;
      /p[6]='S';
        //or
      a[6]='S';

      printf("%s\n",a);
      printf("%s\n",b);
      printf("%s\n",p);
      printf("%s\n",q);
 }
