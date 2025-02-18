#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n==1) {
        printf("Not Prime");}
    else if (n==2) {
        printf("Prime");
    } else if (n%1==0 && n%n==0 && n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0 && n%11!=0) {
        printf("Prime");
    }
    else {
        printf("Not Prime");
    }

    return 0;
}
