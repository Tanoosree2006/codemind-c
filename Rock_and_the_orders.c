#include<stdio.h>
int main()
{
    int d,c;
    scanf("%d %d",&d,&c);
    int a1,a2,a3;
    scanf("%d %d %d",&a1,&a2,&a3);
    int b1,b2,b3;
    scanf("%d %d %d",&b1,&b2,&b3);
    int x=a1+a2+a3;
    int y=b1+b2+b3;
    int p;
    int m=x+y+d+d;
    if(x<150||y<150)
    {
        if(x<150 && y<150)
        {
            p=x+y+c+d+d;
        }
        else
        {
            p=x+y+c+d;
        }
    }
    else
    {
        p=x+y+c;
    }
    if(p<m){
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}