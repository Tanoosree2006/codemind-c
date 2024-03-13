#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    scanf("%[^
]s",&a);
    int len = strlen(a);
    for(int i=0,j=len-1;i<=j;i++,j--)
    {
        char c=a[i];
        a[i]=a[j];
        a[j]=c;
    }
    printf("%s",a);
}