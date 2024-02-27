#include<stdio.h>
#include<string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[], int start, int end) {
    // Base case: If the string has one or zero characters, it is a palindrome
    if (start >= end) {
        return 1;
    }

    // Check if the characters at the current positions are the same
    if (str[start] == str[end]) {
        // Recur for the substring excluding the first and last characters
        return isPalindrome(str, start + 1, end - 1);
    } else {
        // If characters are not the same, the string is not a palindrome
        return 0;
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

    if (isPalindrome(str, 0, strlen(str) - 1)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
