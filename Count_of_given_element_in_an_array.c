#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m,count=0;
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        if(m==arr[i])
        {
            count++;
        }
    }
    printf("%d",count);
}