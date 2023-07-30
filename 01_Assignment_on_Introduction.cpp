#include <iostream>

long long sum_of_natural_numbers(long long n) {
    if (n <= 0) {
        return 0;
    }

    // using the formula for the sum of the first N natural numbers
    return n * (n + 1) / 2;
}

int main() {
    long long n;
    scanf("%lld", &n);

    printf("%lld\n", sum_of_natural_numbers(n));

    return 0;
}