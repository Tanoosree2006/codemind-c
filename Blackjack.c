#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(n+m>=11)
    {
        printf("%d",(21-(n+m)));
    }
    else
    {
        printf("-1");
    }
}