#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i<=n+64;i--)
    {
        for(j=n+64;j<=i;j++)
    {
        printf("%c",i+64);
    }
    printf("
");
}
}