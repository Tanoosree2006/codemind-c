#include<stdio.h>
int main()
{
    int n,a,x,sum =0;
    scanf("%d",&n);
    a = n*n;
    while(a!=0)
    {
        x= a%10;
        sum +=x;
        a/=10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else 
    
    {
        printf("Not Neon Number");
    }
}
