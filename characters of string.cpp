#include <stdio.h>

// Function to count occurrences of a character in a string using pointers
int countOccurrences(const char *str, char target) {
    int count = 0;
    const char *ptr = str;

    while (*ptr != '\0') {
        if (*ptr == target) {
            count++;
        }
        ptr++;
    }

    return count;
}

int main() {
    char inputString[100];
    char targetChar;

    // Input the string
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the newline character from the input
    inputString[strcspn(inputString, "\n") = '\0';

    // Input the character to count
    printf("Enter the character to count: ");
    scanf("%c", &targetChar);

    // Count occurrences using the countOccurrences function
    int occurrences = countOccurrences(inputString, targetChar);

    // Display the result
    printf("Occurrences of '%c' in the string: %d\n", targetChar, occurrences);

    return 0;
}
