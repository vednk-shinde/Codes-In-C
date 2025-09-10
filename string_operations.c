#include <stdio.h>

// Function to find the length of the string using pointers
int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

// Function to copy one string into another using pointers
void stringCopy(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0'; // Add null terminator at the end
}

int main() {
    char str1[100], str2[100];
    int choice;

    do {
        printf("\n--- String Operations Menu ---\n");
        printf("1. Find length of the string\n");
        printf("2. Copy one string to another and print both\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // to consume newline left in the buffer

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);

                // Remove newline character from fgets
                char *newline = str1;
                while (*newline != '\0') {
                    if (*newline == '\n') {
                        *newline = '\0';
                        break;
                    }
                    newline++;
                }

                printf("Length of the string is: %d\n", stringLength(str1));
                break;

            case 2:
                printf("Enter the source string: ");
                fgets(str1, sizeof(str1), stdin);

                // Remove newline character from fgets
                newline = str1;
                while (*newline != '\0') {
                    if (*newline == '\n') {
                        *newline = '\0';
                        break;
                    }
                    newline++;
                }

                stringCopy(str1, str2);

                printf("Source String: %s\n", str1);
                printf("Copied String: %s\n", str2);
                break;

            case 3:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}


