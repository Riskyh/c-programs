#include <stdio.h>
#include <string.h>

int val(char c) 
{ 
    if (c >= '0' && c <= '9') 
        return (int)c - '0'; 
    else
        return (int)c - 'A' + 10; 
} 
int basetodec(char *str, int b1)
{
   int len = strlen(str); 
    int power = 1;  
    int num = 0;  
    int i;
    for (i = len - 1; i >= 0; i--) 
    { 
        // A digit in input number must be 
        // less than number's base 
        if (val(str[i]) >= b1) 
        { 
           printf("Invalid Number"); 
           return -1; 
        } 
  
        num += val(str[i]) * power; 
        power = power * b1; 
    } 
  
    return num;  
}

char reVal(int num1) 
{ 
    if (num1 >= 0 && num1 <= 9) 
        return (char)(num1 + '0'); 
    else
        return (char)(num1 - 10 + 'A'); 
} 

void strev(char *string) 
{ 
    int len = strlen(string); 
    int i; 
    for (i = 0; i < len/2; i++) 
    { 
        char temp = string[i]; 
        string[i] = string[len-i-1]; 
        string[len-i-1] = temp; 
    } 
} 

char* dectob2(char str1[], int B2, int dec)
{
    int index = 0;   
  
    while (dec > 0) 
    { 
        str1[index++] = reVal(dec % B2); 
        dec /= B2; 
    } 
    str1[index] = '\0'; 
  
    // Reverse the result 
    strev(str1); 
  
    return str1; 
}
int main()
{
    char str[10],str1[100];
    int b1,b2,dec,b2otp;
    printf("enter the number then bases b1 and b2\n");
    gets(str);
    scanf("%d%d",&b1,&b2);
    if(b1!=10);
    dec=basetodec(str,b1);
    if(b2==10)
    printf("the required output is %d\n",dec);
    else
    {
        printf("the output is\n%s",dectob2(str1,b2,dec));
    }
    

    return 0;
}
