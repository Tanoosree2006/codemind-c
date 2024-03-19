#include<stdio.h>
int main()
{
int m,n,i,j,srch,count=0,a[100][100];
scanf("%d %d",&m,&n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
//printf("%d	",a[i][j]);
//printf(“
”);
scanf("%d",&srch);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(srch==a[i][j])
count++;
}
}
if(count==0)
printf("0");
else
printf("1");
}
}
