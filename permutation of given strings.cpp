#include <stdio.h>
#include <string.h>

// Function to swap two characters in a string
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Recursive function to generate permutations
void generatePermutations(char str[], int start, int end) {
    if (start == end) {
        printf("%s\n", str);
        return;
    }

    for (int i = start; i <= end; i++) {
        // Swap the current character with the first character
        swap(&str[start], &str[i]);

        // Recur for the substring excluding the swapped character
        generatePermutations(str, start + 1, end);

        // Backtrack: Undo the swap to restore the original string
        swap(&str[start], &str[i]);
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("Permutations of %s are:\n", str);
    generatePermutations(str, 0, strlen(str) - 1);

    return 0;
}
