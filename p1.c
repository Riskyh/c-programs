#include <stdio.h>
int power(int n1, int n2);
int val;
int count(int n){

    if(n<=1)
        return 0;
    else if (n%2!=0)
        return 1 + count(n-1);
    else if (n%2==0)
        return 1 + count(n/2);
}
int main()
{
   printf("enter the values of m , n:\n");
   int m,n,ans;
   scanf("%d%d",&m,&n);
   if(m==0 && n==0)
     printf("illegal input\n");
   ans=power(m,n);
   printf("%d,%d",ans,count(n));
    return 0;
}
 int power(int m, int n)
  {  
     if(n==1)
         val=m;
     if(n%2==0 )
        { val=power(m,n/2)*power(m,n/2);
         
        }
     if(n%2!=0 && n!=1)  
        { val=m*power(m,n-1);
         
        }
        
     
     
 
    return val;   
  }
