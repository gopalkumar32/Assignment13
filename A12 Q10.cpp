#include<stdio.h>
void rev(int);
int main()
{
        int n;
        printf("Entre the number\n");
        scanf("%d",&n);
        rev(n);
}
void rev(int n)
{
        if(n>=1)
        {
                printf("%d\t",n);
                rev(n-1);
        }
        
}
