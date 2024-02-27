#include <stdio.h>
#include <string.h>

// Function to concatenate two strings using pointers
void concatenateStrings(char *str1, const char *str2) {
    // Move the pointer to the end of the first string
    while (*str1 != '\0') {
        str1++;
    }

    // Copy characters from the second string to the end of the first string
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }

    // Add null terminator at the end of the concatenated string
    *str1 = '\0';
}

int main() {
    char str1[100], str2[100];

    // Input the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove the newline character from the input (if present)
    str1[strcspn(str1, "\n")] = '\0';

    // Input the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove the newline character from the input (if present)
    str2[strcspn(str2, "\n")] = '\0';

    // Concatenate the strings using the concatenateStrings function
    concatenateStrings(str1, str2);

    // Display the concatenated string
    printf("Concatenated string: %s\n", str1);

    return 0;
}
