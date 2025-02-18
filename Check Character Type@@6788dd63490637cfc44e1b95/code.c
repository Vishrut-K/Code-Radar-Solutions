#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);  // Use %c to read a character
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
        printf("Vowel");
    } else if (a >= 'a' && a <= 'z') {  // Use 'z' instead of z
        printf("Consonant");
    } else if (a >= '0' && a <= '9') {
        printf("Digit");
    } else {
        printf("Special Character");
    }
    return 0;
}
