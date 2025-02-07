#include<stdio.h>

  struct student
  {
      char name[25];
      int age;
      int phone;
  };

  void printstruc (struct student*);
  int main()
  {
      struct student s={"saraf",22,123};
      struct student *p=&s;
      printstruc(p);

      return 0;
  }

  void printstruc(struct student* a)
  {
      printf("\n Name :%s",a->name);
      printf("\n Age :%d",a->age);
      printf("\n Phone :%d",a->phone);
  }
