#include <stdio.h>
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0 || sum > 9) {
        if (num == 0) {
            num = sum;
            sum = 0;
        }
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int number;
    scanf("%d", &number);
    int result = sumOfDigits(number);
    printf("%d
",result);
    return 0;
}
