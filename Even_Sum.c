#include<stdio.h>
int main()
{
 int n, i, a[10];
 int Even_Sum = 0;
 scanf("%d", &n);
 for(i = 0; i < n; i++)
 {
      scanf("%d", &a[i]);
 }
  
 for(i = 0; i < n; i ++)
 {
   if(a[i] % 2 == 0)
   {
 	Even_Sum = Even_Sum + a[i];
   }
 }
 {
 printf("%d",Even_Sum);
}
}


