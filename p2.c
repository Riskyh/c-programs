# include <stdio.h> 
# include <math.h>
  
void revstr(char *str1) 
{ 
   if (*str1) 
   { 
       revstr(str1+1); 
       printf("%c", *str1); 
   } 
} 
  
int main() 
{ 
   printf("enter the string");
   char str[50];
   gets(str);
   reverse(str); 
   return 0; 
} 
