 #include<stdio.h>
 int main()
 {
     struct student{

     char name[25];
     int age;
     int phone;

     };


 struct student s1;
 printf("Enter Your Name: ");
 scanf("%s",&s1.name);
 printf("Enter You Age: ");
 scanf("%d",&s1.age);
 printf("Enter Your Phone number: ");
 scanf("%d",&s1.phone);

 printf("\n Name :%s", s1.name);
 printf("\n Age : %d", s1.age);
 printf("\n Phone Number : %d", s1.phone);
 }
