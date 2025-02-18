#include <stdio.h>

int calc_digit_sum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    
    int result = 0;
    for (int i = 1; i <= n; i++) {
        int digit_sum = calc_digit_sum(i);
        if (digit_sum >= a && digit_sum <= b) {
            result += i;  // 各桁の和ではなく、数字自体を足す
        }
    }
    
    printf("%d\n", result);
    return 0;
}
