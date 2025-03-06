#include <stdio.h>
//Write a program in C to delete an element at a desired position from an array
int main() {
    int n, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 0;
    }

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &position);

    if (position < 1 || position > n) {
        printf("Invalid position!\n");
        return 0;
    }

    for (int i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
