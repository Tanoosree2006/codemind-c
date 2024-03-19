#include<stdio.h>
int main()
{
    int i,j,n,m,esum=0,osum=0;
    scanf("%d%d",&n,&m);
    int A[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(A[i][j]%2==0){
                esum+=A[i][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(A[i][j]%2==1){
                osum+=A[i][j];
            }
        }
    }
    printf("%d ",esum);
    printf("%d",osum);
}