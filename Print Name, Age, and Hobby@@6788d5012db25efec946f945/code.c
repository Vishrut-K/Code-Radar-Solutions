#include <stdio.h>

int main(){
    char a[120], c[120];
    int b;
    scanf("%s%d%s", &a, &b, &c);
    printf("Name: %s\n", a);
    printf("Age: %d\n", b);
    printf("Hobby: %s\n", c);
    return 0;
}