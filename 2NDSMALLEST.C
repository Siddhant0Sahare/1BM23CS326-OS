#include <stdio.h>
//WRITE A PROGRAM TO FIND THE SECOND LARGEST NUMBER IN A ARRAY
int findSecondSmallest(int arr[], int n) {
    if (n < 2) {
        return -1;
    }
    int firstSmallest = arr[0];
    int secondSmallest = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] < firstSmallest) {
            secondSmallest = firstSmallest;
            firstSmallest = arr[i];
        } else if (arr[i] > firstSmallest) {
            if (secondSmallest == -1 || arr[i] < secondSmallest) {
                secondSmallest = arr[i];
            }
        }
    }
    return secondSmallest;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = findSecondSmallest(arr, n);
    if (result == -1) {
        printf("There is no second smallest element.\n");
    } else {
        printf("The second smallest element is: %d\n", result);
    }
    return 0;
} 