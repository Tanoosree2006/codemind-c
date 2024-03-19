#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int arr[1000][1000];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
     for(i=0;i<m;i++){
           int sum=0;
        for(j=0;j<m;j++){
          sum+=arr[j][i];
          
        }
        printf("%d ",sum);
}
}