#include<stdio.h>

// Function to solve Tower of Hanoi problem for n disks
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    // Move n-1 disks from source to auxiliary peg
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination peg
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // Move the n-1 disks from auxiliary to destination peg
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of disks.\n");
        return 1;
    }

    printf("Steps to solve Tower of Hanoi with %d disks:\n", n);
    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
