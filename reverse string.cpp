#include <stdio.h>

// Function to reverse a string using pointers
void reverseString(char *str) {
    // Find the length of the string
    char *end = str;
    while (*end != '\0') {
        end++;
    }
    end--; // Move back from the null terminator

    // Swap characters from the beginning and end of the string
    while (str < end) {
        // Swap characters using a temporary variable
        char temp = *str;
        *str = *end;
        *end = temp;

        // Move pointers towards each other
        str++;
        end--;
    }
}

int main() {
    char inputString[100];

    // Input the string
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the newline character from the input (if present)
    for (int i = 0; inputString[i] != '\0'; i++) {
        if (inputString[i] == '\n') {
            inputString[i] = '\0';
            break;
        }
    }

    // Reverse the string using the reverseString function
    reverseString(inputString);

    // Display the reversed string
    printf("Reversed string: %s\n", inputString);

    return 0;
}
