#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
// Addition function
double addition(double number1, double number2) {
    return number1 + number2;
}

// Subtraction function
double subtraction(double number1, double number2) {
    return number1 - number2;
}

// Multiplication function
double multiplication(double number1, double number2) {
    return number1 * number2;
}

// Factorial calculation function
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

// Primality check function
int isPrime(int n) {
    if (n <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

// Primality check function for two numbers
int isPrimeForTwo(int number1, int number2) {
    // Finding the Greatest Common Divisor (GCD)
    while (number2 != 0) {
        int temp = number2;
        number2 = number1 % number2;
        number1 = temp;
    }

    // If GCD is 1, then they are prime
    return number1 == 1;
}

// Exponential function
double power(double base, int exponent) {
    double result = 1.0;

    if (exponent > 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    }
    else if (exponent < 0) {
        for (int i = 0; i < -exponent; i++) {
            result /= base;
        }
    }

    return result;
}

int main() {
    int choice;

    while (1) {
        // Displaying options to the user
        printf("\nChoose a Mathematical Operation:\n");
        printf("0. Addition\n");
        printf("1. Multiplication\n");
        printf("2. Subtraction\n");
        printf("3. Factorial Calculation\n");
        printf("4. Primality Check\n");
        printf("5. Primality Check for Two Numbers\n");
        printf("6. Exponential Calculation\n");
        printf("7. Operation Menu\n");
        printf("8. Exit\n");
        printf("Your choice: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 0:
        case 1:
        case 2: {
            double number1, number2;
            printf("Enter two numbers: ");
            scanf_s("%lf %lf", &number1, &number2);

            if (choice == 0) {
                printf("Result: %.2f\n", addition(number1, number2));
            }
            else if (choice == 2) {
                printf("Result: %.2f\n", subtraction(number1, number2));
            }
            else if (choice == 1) {
                printf("Result: %.2f\n", multiplication(number1, number2));
            }
            break;
        }

        case 3: {
            int n;
            printf("Enter a number: ");
            scanf_s("%d", &n);
            printf("Result: %d\n", factorial(n));
            break;
        }

        case 4: {
            int n;
            printf("Enter a number: ");
            scanf_s("%d", &n);
            if (isPrime(n)) {
                printf("Prime\n");
            }
            else {
                printf("Not Prime\n");
            }
            break;
        }

        case 5: {
            int number1, number2;
            printf("Enter two numbers: ");
            scanf_s("%d %d", &number1, &number2);
            if (isPrimeForTwo(number1, number2)) {
                printf("Prime\n");
            }
            else {
                printf("Not Prime\n");
            }
            break;
        }

        case 6: {
            double base;
            int exponent;
            printf("Enter base and exponent: ");
            scanf_s("%lf %d", &base, &exponent);
            printf("Result: %.2f\n", power(base, exponent));
            break;
        }

        case 7: {
            while (1) {
                // Displaying options to the user
                printf("\nChoose a Mathematical Operation:\n");
                printf("0. Addition\n");
                printf("1. Multiplication\n");
                printf("2. Subtraction\n");
                printf("3. Factorial Calculation\n");
                printf("4. Primality Check\n");
                printf("5. Primality Check for Two Numbers\n");
                printf("6. Exponential Calculation\n");
                printf("7. Operation Menu\n");
                printf("8. Exit\n");
                printf("Your choice: ");
                scanf_s("%d", &choice);

                if (choice == 8) {
                    printf("Exiting.\n");
                    return 0;
                }

                switch (choice) {
                case 0:
                case 1:
                case 2: {
                    double number1, number2;
                    printf("Enter two numbers: ");
                    scanf_s("%lf %lf", &number1, &number2);

                    if (choice == 0) {
                        printf("Result: %.2f\n", addition(number1, number2));
                    }
                    else if (choice == 2) {
                        printf("Result: %.2f\n", subtraction(number1, number2));
                    }
                    else if (choice == 1) {
                        printf("Result: %.2f\n", multiplication(number1, number2));
                    }
                    break;
                }

                case 3: {
                    int n;
                    printf("Enter a number: ");
                    scanf_s("%d", &n);
                    printf("Result: %d\n", factorial(n));
                    break;
                }

                case 4: {
                    int n;
                    printf("Enter a number: ");
                    scanf_s("%d", &n);
                    if (isPrime(n)) {
                        printf("Prime\n");
                    }
                    else {
                        printf("Not Prime\n");
                    }
                    break;
                }

                case 5: {
                    int number1, number2;
                    printf("Enter two numbers: ");
                    scanf_s("%d %d", &number1, &number2);
                    if (isPrimeForTwo(number1, number2)) {
                        printf("Prime\n");
                    }
                    else {
                        printf("Not Prime\n");
                    }
                    break;
                }

                case 6: {
                    double base;
                    int exponent;
                    printf("Enter base and exponent: ");
                    scanf_s("%lf %d", &base, &exponent);
                    printf("Result: %.2f\n", power(base, exponent));
                    break;
                }

                case 7:
                    printf("You are already in the Operation Menu.\n");
                    break;

                default: {
                    printf("Invalid choice. Try again.\n");
                    break;
                }
                }
            }
        }

        case 8:
            printf("Exiting.\n");
            return 0;

        default: {
            printf("Invalid choice. Try again.\n");
            break;
        }
        }
    }

    return 0;
}
