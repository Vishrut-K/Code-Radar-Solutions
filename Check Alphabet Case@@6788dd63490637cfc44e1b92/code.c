#include <stdio.h>
int main(){
    int a;
    scanf("%c", &a);
    if (a>=A || a<=Z){
        printf("Uppercase");
    }
    else {
        printf("Lowercase");
    }
    return 0;
}