#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n],count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=-1,max=-1;
    for(i=0;i<n;i++){
        int count=0;
    
    for(int j=0;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
        }
    }
    if(arr[i]==count){
        if(min==-1||arr[i]<min){
            min=arr[i];
        }
        if(max==-1||arr[i]>max){
            max=arr[i];
        }
    }
}
if(min==-1||max==-1){
    printf("-1
");
}else{
    printf("%d %d
",min,max);
}

}
