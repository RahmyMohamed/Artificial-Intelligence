 #include<stdio.h>
 #include<string.h>
 struct student{

     char name[25];
     int age;
     int phone;

     };

 struct student* createStr(char [],int,int);

 int main()
 {
   struct student *p;

   p= createStr("Nila",26,123);

   printf("\n Name : %s",p->name);
   printf("\n Age : %d",p->age);
   printf("\n Phone : %d",p->phone);

   return 0;
 }

 struct student* createStr(char name[],int age,int phone)
 {
     static struct student s;

     strcpy (s.name,name);
     s.age=age;
     s.phone=phone;

     return &s;
 }


