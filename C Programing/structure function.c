 #include<stdio.h>
 void printstruc(char[],int,int);

 int main()
 {
     struct student{

     char name[25];
     int age;
     int phone;

     };


   struct student s={"Nila",26,123};

   printstruc(s.name,s.age,s.phone);
 }

 void printstruc(char name[],int age,int phone)
 {
     printf("\n Name : %s",name);
     printf("\n Age : %d",age);
     printf("\n Phone : %d",phone);
 }


