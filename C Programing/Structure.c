#include<stdio.h>
struct students
{
    int sid;
    char sname[20];
    int sage;
};
int main()
{
    struct students a[10];
    int x=0;

    for (x=0;x<5;x++)
{
      printf("Enter Student Details:\n");
    scanf("%d",&a[x].sid);
    scanf("%s", a[x].sname);
    scanf("%d", &a[x].sage);
}
    for (x=0;x<5;x++)
{
      printf("%s Your Details: \n",a[x].sname);
    printf("Student Name: %s\n",a[x].sname);
    printf("Student ID: %d\n",a[x].sid);
    printf("Student Age: %d\n",a[x].sage);
}
}
