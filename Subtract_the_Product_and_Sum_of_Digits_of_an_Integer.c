#include <stdio.h>

int main() {
    int number, digit, sum = 0, product = 1;
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;
        sum += digit;
        product *= digit;
        number /= 10;
    }

    int result = product-sum;
    printf("%d
", result);

    return 0;
}
