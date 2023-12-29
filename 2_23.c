
#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    int smaller = num1;
    if (num2 < smaller) {
        smaller = num2;
    }
    if (num3 < smaller) {
        smaller = num3;
    }
    
    int bigger = num1;
    if (num2 > bigger) {
        bigger = num2;
    }
    if (num3 > bigger) {
        bigger = num3;
    }

    printf("Smaller number: %d\n", smaller);
    printf("Bigger number: %d\n", bigger);
}
