/*
    Program: Menu-Driven Bitwise Operations on Integers

    Description:
    This program allows the user to perform the following bitwise operations on integers:
    1. Bitwise AND
    2. Bitwise OR
    3. Right Shift
    4. Left Shift

    The user selects an operation from the menu and inputs the required integers.
    The result of the selected operation is then displayed.
*/

#include <stdio.h>

int main() {
    int choice, a, b;

    do {
        printf("\n--- Bitwise Operations Menu ---\n");
        printf("1. Bitwise AND\n");
        printf("2. Bitwise OR\n");
        printf("3. Right Shift\n");
        printf("4. Left Shift\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("Result (a & b): %d\n", a & b);
                break;
            case 2:
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("Result (a | b): %d\n", a | b);
                break;
            case 3:
                printf("Enter integer and shift amount: ");
                scanf("%d %d", &a, &b);
                printf("Result (a >> b): %d\n", a >> b);
                break;
            case 4:
                printf("Enter integer and shift amount: ");
                scanf("%d %d", &a, &b);
                printf("Result (a << b): %d\n", a << b);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 5);

    return 0;
}
