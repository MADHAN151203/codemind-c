#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n%3==0 && n%5==0 && n%7==0)
        {
            printf("PlingPlangPlong");
        }
        if(n%3==0 && n%5==0 && n%7!=0)
        {
            printf("PlingPlang");
        }
        if(n%3==0 && n%5!=0 && n%7==0)
        {
            printf("PlingPlong");
        }
        if(n%3!=0 && n%5==0 && n%7==0)
        {
            printf("plangPlong");
        }
        if(n%3==0 && n%5!=0 && n%7!=0)
        {
            printf("Pling");
        }
        if(n%3!=0 && n%5==0 && n%7!=0)
        {
            printf("Plang");
        }
        if(n%3!=0 && n%5!=0 && n%7==0)
        {
            printf("Plong");
        }
        if(n%3!=0 && n%5!=0 && n%7!=0)
        {
            printf("%d",n);
        }
}