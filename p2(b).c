#include <stdio.h>
void swap(int *m,int *n)
{
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;
}

int main()
{   int a,b;
    printf("enter the 2 values to be swapped\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("after swap the values are\na=%d\nb=%d\n",a,b);

    return 0;
}
