#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cnt+=arr[i];
    }
    float avg = cnt/n;
    int ele=0;
    for(int i=0;i<n;i++)
    {
        if(avg==arr[i])
        ele++;
    }
    if(ele>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}