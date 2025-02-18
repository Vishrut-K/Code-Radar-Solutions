#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);

    switch (marks) {
        case (marks>=90):
            printf("A");
            break;
        case (marks>=80 && marks<90):
            printf("B");
            break;
        case (marks>=70 && marks<80):
            printf("C");
            break;
        case (marks>=60 && marks<70):
            printf("D");
            break;
        case (marks<60):
            printf("F");
            break;
    }

    return 0;
}
