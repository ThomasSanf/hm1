#include <stdio.h>

int main() {
    float weight, height;

    printf("Please enter your weight in Kilograms and your height in meters: \n");
    scanf("%f %f", &weight, &height);

    float BMI = weight / (height * height);
    printf("Your BMI is: %.2f\n\n", BMI);
    printf("BMI VALUES\nUnderweight: Less than 18.5\nNormal: Between 18.5 and 24.9\nOverweight: Between 25 and 29.9\nObese: 30 or greater\n");

    return 0;
}
