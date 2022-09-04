#include<stdio.h>
void btod(int n);
int main()
{
        int n;
        printf("Entre the number\n");
        scanf("%d",&n);
        btod(n);
}
void btod(int n)
{
        if(n==1)
        printf("1");
        else
        {
                btod(n/8);
                printf("%d",n%8);
        }
}
