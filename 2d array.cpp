#include <stdio.h>

void findSaddlePoints(int matrix[][100], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        // Find the minimum element in the row
        int minInRow = matrix[i][0];
        int colIndex = 0;

        for (int j = 1; j < columns; j++) {
            if (matrix[i][j] < minInRow) {
                minInRow = matrix[i][j];
                colIndex = j;
            }
        }

        // Check if the minimum element in the row is also the maximum in its column
        int k;
        for (k = 0; k < rows; k++) {
            if (matrix[k][colIndex] > minInRow) {
                break; // The minimum in the row is not the maximum in its column
            }
        }

        // If k reached the end, then minInRow is a saddle point
        if (k == rows) {
            printf("Saddle Point found at (%d, %d): %d\n", i, colIndex, minInRow);
        }
    }
}

int main() {
    int rows, columns;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int matrix[100][100];

    // Input the matrix elements
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find and print saddle points
    findSaddlePoints(matrix, rows, columns);

    return 0;
}
