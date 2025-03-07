#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // return the index if target is found
        }
    }
    return -1;  // return -1 if target is not found
}

int main() {
    int arr[] = {3, 5, 2, 8, 7, 1, 4};  // sample array
    int target = 8;  // element to search for
    int size = sizeof(arr) / sizeof(arr[0]);  // calculate size of array

    // Call linearSearch function
    int result = linearSearch(arr, size, target);

    // Output result
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    printf("Program Executed by Aadarsha Jha(023BSCIT050)");
    return 0;
}
