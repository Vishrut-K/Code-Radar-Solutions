#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n==1) {
        printf("Not Prime");
    } else if (n%1==0 && n%n==0) {
        printf("Prime");
    }
    else {
        printf("Not Prime")
    }

    return 0;
}
