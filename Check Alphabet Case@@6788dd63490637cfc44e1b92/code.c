#include <stdio.h>
int main(){
    char a;
    scanf("%ch", &a);
    if (a>=A || a<=Z){
        printf("Uppercase");
    }
    else {
        printf("Lowercase");
    }
    return 0;
}