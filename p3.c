#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

 bool checkpal(char str[], int s, int e)
 { 
        if(s==e)
           return true;
        if (!(str[s] >= 'a' && str[s] <= 'z')) 
            {
            return checkpal(str, s + 1, e);
            }
   
        if (!(str[e] >= 'a' && str[e] <= 'z')) 
            { return checkpal(str, s, e - 1); }
   
        if (str[s] != str[e]) 
         {   return false; }
         
        if (s < e) 
         return checkpal(str, s + 1, e - 1); 
  
          return true; 
   
    } 
   
int main()
{
  printf("enter the string to be checked\n");
  char str[50];
  gets(str);
 
    int s = 0, e = strlen(str); 
   
    for (int i = 0; i < e; i++) 
       { str[i] = tolower(str[i]); 
       }
   
   if (checkpal(str,s,e)) 
    printf("Yes"); 
    else
    printf("No"); 
    
    return 0;
}
   