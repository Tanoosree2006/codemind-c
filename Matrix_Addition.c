#include <stdio.h>
int main()
{
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];
   scanf("%d%d", &m, &n);
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);
   scanf("%d%d",&m,&n);
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]);
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d ", sum[c][d]);
      }
      printf("
");
   }
}
