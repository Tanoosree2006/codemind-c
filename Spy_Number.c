#include<stdio.h>
int main()
{
    int n,i,sum=0,pro=1,d;
    scanf("%d",&n);
    while(n>0)
    {
        d = n%10;
        sum = sum+d;
        pro = pro*d;
        n = n/10;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}