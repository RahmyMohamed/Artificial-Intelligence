 #include<stdio.h>
 #include<string.h>
 struct student{

     char name[25];
     int age;
     int phone;

     };

 struct student createStr(char [],int,int);

 int main()
 {

   struct student s1;

   s1= createStr("Nila",26,123);

   printf("\n Name : %s",s1.name);
   printf("\n Age : %d",s1.age);
   printf("\n Phone : %d",s1.phone);

   return 0;
 }

 struct student createStr(char name[],int age,int phone)
 {
     struct student s;

     strcpy (s.name,name);
     s.age=age;
     s.phone=phone;

     return s;
 }


