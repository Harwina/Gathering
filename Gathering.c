#include <stdio.h>

void addition(int num1, int num2) {
    printf("Addition of %d and %d is %d\n", num1, num2, num1 + num2);
}
void subtraction(int num1, int num2) {
    printf("Subtraction of %d and %d is %d\n", num1, num2, num1 - num2);
}
void multiplication(int num1, int num2) {
    printf("Multiplication of %d and %d is %d\n", num1, num2, num1 * num2);
}
void division(int num1, int num2) {
    if (num2 != 0) {
        printf("Division of %d and %d is %d\n", num1, num2, num1 / num2);
    } else {
        printf("Error: Division by zero is undefined.\n");
    }
}
void modulus(int num1, int num2) {
    if (num2 != 0) {
        printf("Modulus of %d and %d is %d\n", num1, num2, num1 % num2);
    } else {
        printf("Error: Modulus by zero is undefined.\n");
    }
}

int main() {
    int choice;
    int num1, num2;

    for (;;) {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting...\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice) {
            case 1:
                addition(num1, num2);
                break;
            case 2:
                subtraction(num1, num2);
                break;
            case 3:
                multiplication(num1, num2);
                break;
            case 4:
                division(num1, num2);
                break;
            case 5:
                modulus(num1, num2);
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}









