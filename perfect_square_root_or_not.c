#include <stdio.h>
# include <string.h>
int main()
{
int n,x=0;
  scanf("%d",&n);

      if (n <= 0) {  
         
        }
       while (n != 1) 
       {  
            if (n % 5 == 0) 
            {  
                n /= 5;  
            } 
            else if (n % 3 == 0) 
            {  
                n /= 3;  
            } 
            else if (n % 2 == 0) 
            {  
                n /= 2;  
            } 
            else 
            {  
                printf("False"); 
                x = 1;  
                break;  
            }  
        } 
		        if (x==0)
		        { 
                printf("True");
                }
                return 0;
}