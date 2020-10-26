#include <stdio.h>
#include <string.h>

void stats(float arr[],int size,float *Avg,float *Max,float *Min)
{
    float sum=0;
    for(int i=0; i<size; i++)
    {
        sum=sum + arr[i];
    }
    *Avg=sum/size;
    *Max=arr[0];
    for(int i=0; i<size; i++)
    {
        if(arr[i]>*Max)
         *Max=arr[i];
    }
    *Min=arr[0];
    for(int i=0; i<size; i++)
    {
        if(arr[i]<*Min)
         *Min=arr[i];
    }
   
}

int main()
{
    printf("enter the size");
    float avg=0,max=0,min=0;
    int n;
    scanf("%d",&n);
    float arr[n];
    printf("enter the values");
    for(int i=0; i<n; i++)
    {
        scanf("%f",&arr[i]);
    }
    stats(arr,n,&avg,&max,&min);
    printf("average is\n%f\nmax is\n%f\nmin is\n%f\n",avg,max,min);

    return 0;
}
