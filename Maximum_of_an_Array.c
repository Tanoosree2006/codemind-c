#include <stdio.h>
int main() {
  int n;
  int arr[100];
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &arr[i]);
  }

  // storing the largest number to arr[0]
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }
{
  printf("%d", arr[0]);
}
  return 0;
}
