#include<stdio.h>
int main()
{
    int num,remainder,sum=0;
    scanf("%d",&num);
    while(num!=0)
    {
        remainder = num%10;
        sum = sum*10+remainder;
        num = num/10;
    }
    printf("%d",sum);
}