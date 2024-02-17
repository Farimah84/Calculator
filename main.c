#include <stdio.h>
#include <math.h>

// Main function
int main() {
    double num1, num2, num3;
    double add, subtract, multiply, divide, sinFunction, cosFunction;
    char operator;

    //printf("Enter first number: ");
    //scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /, s for sin, c for cos): ");
    scanf(" %c", &operator);  // Note: Here, an extra space is used to consume the newline character.

    if (operator == 's' || operator == 'c') {

        printf("Enter a number: ");
        scanf("%lf", &num1);
    }

    if ( operator== '+' || operator== '-' || operator== '*' || operator== '/'){

        printf("Enter first number: ");
        scanf("%lf", &num2);
        printf("enter second number: ");
        scanf("%lf", &num3);
    }


    switch (operator) {
        case '+':
            add = num2 + num3;
            printf("%.2lf + %.2lf = %.2lf\n", num2, num3, add);
            break;
        case '-':
            subtract = num2 - num3;
            printf("%.2lf - %.2lf = %.2lf\n", num2, num3, subtract);
            break;
        case '*':
            multiply = num2 * num3;
            printf("%.2lf * %.2lf = %.2lf\n", num2, num3, multiply);
            break;
        case '/':
            divide = num2 / num3;
            printf("%.2lf / %.2lf = %.2lf\n", num2, num3, divide);
            break;
        case 's':
            printf("sin(%.2lf) = %.2lf\n", num1, sinFunction);
            break;
        case 'c':
            printf("cos(%.2lf) = %.2lf\n", num1, cosFunction);
            break;
        default:
            printf("Error: Invalid operator!\n");
            break;
    }

    return 0;
}
