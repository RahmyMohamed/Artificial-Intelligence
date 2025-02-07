 #include<stdio.h>
 struct student{

     char name[25];
     int age;
     int phone;

     };

 void printstruc(struct student s);

 int main()
 {


   struct student s={"Nila",26,123};

   printstruc(s);

   return 0;
 }

 void printstruc(struct student s)
 {
     printf("\n Name : %s",s.name);
     printf("\n Age : %d",s.age);
     printf("\n Phone : %d",s.phone);
 }


