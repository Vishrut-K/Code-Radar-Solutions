#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int mask = 1 << 32;
    if (a & mask){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    
    return 0;
}