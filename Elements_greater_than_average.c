#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int avg;
    avg=sum/n;
    int count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=avg)
        {
            count++;
        }
    }
    printf("%d",count);
}