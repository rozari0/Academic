#include <stdio.h>

int main() {
    char operator;
    int num1, num2;
    float answer;
    printf("Input Two number: ");
    scanf("%d %d", &num1, &num2);

    printf("Input an arithmetic operator: ");
    do {
        scanf(" %c", &operator);
    } while (operator != '+' && operator != '-' && operator != '*' && operator != '/');

    switch (operator) {
    case '+':
        answer = num1 + num2;
        break;
    case '-':
        answer = num1 - num2;
        break;
    case '*':
        answer = num1 * num2;
        break;
    case '/':
        if (!num2) {
            printf("Can not divide a number by 0.\n");
            return 1;
        }
        answer = num1 / num2;
        break;
    }
    printf("%d %c %d = %.2f\n", num1, operator, num2, answer);

}
