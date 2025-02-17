#include <stdio.h>

int main() {
    int number, bitPosition;
    scanf("%d %d", &number, &bitPosition);

    // Create a mask by shifting 1 left by bitPosition
    int mask = 1 << bitPosition;
    
    // Use bitwise AND to isolate the bit at bitPosition
    int bitValue = (number & mask) >> bitPosition;
    
    // Print the value of the nth bit
    printf("%d",bitValue);

    return 0;
}
