#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,count=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            for(j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    count++;
                    break;
                }
            }
            
        }
    }
    printf("%d",count);
}