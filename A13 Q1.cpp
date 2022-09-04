#include<stdio.h>
int sum(int);
int main()
{
        int n,num;
        printf("Entre the number\n");
        scanf("%d",&n);
        num=sum(n);
        printf("Sum of first n natural number is %d ",num);
}
int sum(int n)
{
        if(n==1)
        return 1;
        else
        return n+sum(n-1);
}
