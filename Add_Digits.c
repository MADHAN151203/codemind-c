#include<stdio.h>
int main()
{
    int a,i,s=0,r;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        s=0;
        while(a!=0)
        {
            r=a%10;
            s=s+r;
            a=a/10;
            
        }
        a=s;
        
    }
    printf("%d",s);
}