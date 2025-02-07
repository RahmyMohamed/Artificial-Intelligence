#include<stdio.h>

int add(int *nums, int count)
{
    int result =0;
    for(int i=0;i<count;i++)
    {
        result= nums[i]+ result;
        printf("Result : %d, Num: %d\n",result,nums[i]);
    }
    return result;
}

int main()
{
    int a[]={10,20,30,40,50,60,70,80};
    printf("sum is: %d\n",add(a,sizeof(a)/sizeof(int)));
}
