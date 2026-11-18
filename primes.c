#include <stdio.h>

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }

    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int limit = 1000000;
    int count = 0;

    for (int n = 2; n <= limit; n++) {
        if (is_prime(n)) {
            count++;
        }
    }
    printf("Primes found: %d\n", count);
    return 0;
}