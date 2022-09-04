#include<stdio.h>
int HCF(int, int);
int main()
{
        int a,b,c;
        printf("Entre two number\n");
        scanf("%d%d",&a,&b);
        c=HCF(a,b);
        printf("HCF of %d and %d is %d",a,b,c);
}
int HCF(int a,int b)
{
        int i=a>b?b:a;
        if(i>=1)
        {
                if(a%i==0&&b%i==0)
                return i;
                else
                i--;
        }
}
