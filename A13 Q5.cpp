#include<stdio.h>
int sum(int);
int main()
{
        int n,s;
        printf("Entre the number\n");
        scanf("%d",&n);
        s=sum(n);
        printf("Sum of digit of given number is %d",s);
}
int sum(int n)
{
        int s=0,r;
        if(n!=0)
        {
                r=n%10;
                s=s+r+sum(n/10);
                return s;
        }
}
