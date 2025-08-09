#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Input three number: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int sum = num1 + num2 + num3;
    float average = sum / 3.0;
    printf("Sum of %d, %d and %d is %d.\n", num1, num2, num3, sum);
    printf("Average of %d, %d and %d is %.2f.\n", num1, num2, num3, average);

    return 0;
}
