#include <stdio.h>

int findPeakElement(int arr[], int size) {
    // If the array has only one element, it's the peak
    if (size == 1) {
        return 0;
    }

    // Check if the first or last element is a peak
    if (arr[0] >= arr[1]) {
        return 0;
    }
    if (arr[size - 1] >= arr[size - 2]) {
        return size - 1;
    }

    // Check for a peak element in the middle of the array
    for (int i = 1; i < size - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return i;  // Return the index of the peak element
        }
    }

    return -1;  // Return -1 if no peak is found (shouldn't happen with the above conditions)
}

int main() {
    int size;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the peak element
    int peakIndex = findPeakElement(arr, size);
    if (peakIndex != -1) {
        printf("A peak element is %d at index %d\n", arr[peakIndex], peakIndex);
    } else {
        printf("No peak element found.\n");
    }

    return 0;
}