#include <stdio.h>
//Write a program in C to find the sum of rows and columns of a matrix
int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSum[rows], colSum[cols];

    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
    }

    for (int i = 0; i < cols; i++) {
        colSum[i] = 0;
    }

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    printf("Sum of rows:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum: %d\n", i + 1, rowSum[i]);
    }

    printf("Sum of columns:\n");
    for (int i = 0; i < cols; i++) {
        printf("Column %d sum: %d\n", i + 1, colSum[i]);
    }

    return 0;
}
