#include <stdio.h>

int main() {
    int num, i, isPrime = 1;
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;  // Found a divisor, not a prime number
                break;
            }
        }
    }

    if (isPrime == 1) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
