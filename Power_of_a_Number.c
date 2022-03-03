#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,p,res;
    scanf("%d%d%d",&x,&y,&m);
    p=pow(x,y);
    res=p%m;

        printf("%d",res);

}