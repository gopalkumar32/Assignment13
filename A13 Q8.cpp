#include<stdio.h>
void fabo(int ,int , int);
int main()
{
        int old=1,current=1,term;
        printf("Entre the term\n");
        scanf("%d",&term);
        fabo(old,current,term);
}
void fabo(int old ,int current, int term)
{
        int newterm;
        if(term>=1)
        {
                newterm=old+current;
                printf("%d\t",newterm);
                term=term-1;
                fabo(current,newterm,term);
        }
}
