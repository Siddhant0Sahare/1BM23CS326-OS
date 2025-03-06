#include <stdio.h>
//Write a program in C to count the total number of duplicate elements in an array
int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int duplicateCount = 0;

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == -1) {
            continue;
        }
        
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicateCount++;
                arr[j] = -1;  
                break;
            }
        }
    }

    printf("The total number of duplicate elements is: %d\n", duplicateCount);

    return 0;
}