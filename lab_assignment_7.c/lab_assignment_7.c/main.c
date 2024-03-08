#include <stdio.h>

void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);

int main() {
    int arr1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("array1 bubble sort:\n");
    bubbleSort(arr1, n1);
    printf("array2 bubble sort:\n");
    bubbleSort(arr2, n2);
    printf("array1 selection sort:\n");
    selectionSort(arr1, n1);
    printf("array2 selection sort:\n");
    selectionSort(arr2, n2);

    return 0;
}

void bubbleSort(int arr[], int n) {
    int i, j, temp, totalSwaps = 0;
    int swaps[n]; // Array to store swaps for each element

    // Initialize swaps array
    for (i = 0; i < n; i++) {
        swaps[i] = 0;
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps[j]++; // Increment swaps for the current element
                totalSwaps++; // Increment total swaps
            }
        }
    }

    // Display number of swaps for each element
    for (i = 0; i < n; i++) {
        printf("%d: %d\n", arr[i], swaps[i]);
    }
    printf("Total number of swaps: %d\n", totalSwaps);
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp, totalSwaps = 0;
    int swaps[n]; // Array to store swaps for each element

    // Initialize swaps array
    for (i = 0; i < n; i++) {
        swaps[i] = 0;
    }

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
            
        
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
            swaps[min_idx]++; // Increment swaps for the current element
            totalSwaps++; // Increment total swaps
        }
    

    // Display number of swaps for each element
    for (i = 0; i < n; i++) {
        printf("%d: %d\n", arr[i], swaps[i]);
    }
    printf("Total number of swaps: %d\n", totalSwaps);
}
