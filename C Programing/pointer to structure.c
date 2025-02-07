 #include<stdio.h>
 int main()
 {
     struct student{

     char name[25];
     int age;
     int phone;

     };


 struct student s1;
 struct student *p;
 p=&s1;


 printf("Enter Your Name: ");
 scanf("%s",&(*p).name);
 printf("Enter You Age: ");
 scanf("%d",&(*p).age);
 printf("Enter Your Phone number: ");
 scanf("%d",&(*p).phone);

 printf("\n Name :%s", (*p).name);
 printf("\n Age : %d", (*p).age);
 printf("\n Phone Number : %d", (*p).phone);

}
