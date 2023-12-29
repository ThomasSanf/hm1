#include <stdio.h>

int main() {
    int number;
    int square, cube;

    printf("Number\tSquare\tCube\n");
    printf("------\t------\t----\n");

    for (number = 0; number <= 10; number++) {
        square = number * number;
        cube = number * number * number;

        printf("%d\t\t%d\t\t%d\n", number, square, cube);
    }
}
