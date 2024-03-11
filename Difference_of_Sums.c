#include <stdio.h>

int main() 
{
    int n, sum_of_squares = 0, square_of_sum, sum = 0, diff;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum_of_squares += i * i;
        sum += i;
    }
    square_of_sum = sum * sum;
    diff = sum_of_squares - square_of_sum;
    if (diff < 0) {
        diff = -diff;
    }
    printf("%d
", diff);
    return 0;
}
