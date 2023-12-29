#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if(num1%num2==0){
        printf("These two numbers are multiples of each other");
    }else{
        printf("These two numbers aren't multiples of each other");
    }
}
