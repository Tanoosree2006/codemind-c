#include<stdio.h>
#include<string.h>
int main()
{
    int value;
    char n[100],m[100];
    scanf("%s
 %s",&n,&m);
    value = strcmp(n,m);
    if(value==0)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not Equal");
    }
}
