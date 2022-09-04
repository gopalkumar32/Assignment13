#include<stdio.h>
int fact(int);
int main()
{
        int n,s;
        printf("Entre the number\n");
        scanf("%d",&n);
        s=fact(n);
        printf("Factorial of %d is %d",n,s);
        
}
int fact(int n)
{
        if(n==1)
        return 1;
        else
        return n*fact(n-1);
}
