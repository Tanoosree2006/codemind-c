#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int count=0;
    scanf("%[^
]s",&s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='A'||s[i]<='Z'||s[i]>='a'||s[i]<='z');
        count++;
    }
    printf("%d",count);
    

}