#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, j, temp, totalSwaps = 0;
    int swaps[n][n]; // 2D array to store swaps for each element

    // Initialize swaps array
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            swaps[i][j] = 0;
        }
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps[i][j]++; // Increment swaps for the current element
                totalSwaps++; // Increment total swaps
            }
        }
    }

    // Display number of swaps for each element
    for (i = 0; i < n; i++) {
        printf("Number of swaps needed for value %d:\n", arr[i]);
        for (j = 0; j < n; j++) {
            if (swaps[i][j] > 0) {
                printf("  Index %d: %d swap(s)\n", j, swaps[i][j]);
            }
        }
    }
    printf("Total number of swaps performed: %d\n", totalSwaps);
}

int main()
{
    int arr1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Array 1:\n");
    bubbleSort(arr1, n1);
    printf("\nArray 2:\n");
    bubbleSort(arr2, n2);

    return 0;
}
