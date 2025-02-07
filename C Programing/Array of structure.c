 #include<stdio.h>
 int main()
 {
     struct student{

     char name[25];
     int age;
     int phone;

     };


 struct student s[10];

 for (int i=0;i<10;i++)
 {
 printf("Enter Your Name: ");
 scanf("%s",&s[i].name);
 printf("Enter You Age: ");
 scanf("%d",&s[i].age);
 printf("Enter Your Phone number: ");
 scanf("%d",&s[i].phone);
 }
 for (int i=0;i<10;i++)
 {
 printf("\n Name :%s", s[i].name);
 printf("\n Age : %d", s[i].age);
 printf("\n Phone Number : %d", s[i].phone);
 }
}
