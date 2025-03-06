#include <stdio.h>
//WRITE A PROGRAM TO FIND SUM OF THE LEFT DIAGONALS IN A MATRIX
int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int sum = 0;

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows && i < cols; i++) {
        sum += matrix[i][i];
    }

    printf("The sum of the left diagonal is: %d\n", sum);

    return 0;
}
