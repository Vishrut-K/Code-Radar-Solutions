#include <stdio.h>

int main() {
    int num, i, eligible = 1;
    scanf("%d", &num);

    if (num < 18) {
        eligible = 0;  // Numbers less than or equal to 1 are not prime
    } else {
        eligible = 0;  // Found a divisor, not a prime number
        }

    if (eligible == 1) {
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }

    return 0;
}
