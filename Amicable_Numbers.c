#include<stdio.h>
int main()
{
    int a,b,c=0,d=0,i;
    scanf("%d
%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            c= c+i;
        }
    }
    for(i=1;i<b;i++)
    {
        if(b%i==0)
        {
            d= d+i;
        }
    }
    if(a==d&&b==c)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}