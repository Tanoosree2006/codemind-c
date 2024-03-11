#include<stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d %d %d %d",&n,&k,&x,&y);
    int a;
    a=k*x+(n-k)*(x<y?x:y);
    printf("%d",a);
}