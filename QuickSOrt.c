//Divide and Conquer Algorithm
//Quick Sort

#include <stdio.h>
#define N 10000

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[N];
    int n,i;
    printf("Enter the total no. of elements\n");
    scanf_s("%d",&n);
    printf("Enter %d elements\n",n);
    for(i = 0  ;i < n; i++){
        scanf_s("%d",&arr[i]);
    }

    printf("The original array \n");
    for (int i = 0; i < n;i++){
    	printf("%d ",arr[i]);
    	
	}
    printf("\n");

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
        printf("\nProgram Executed By Aadarsha Jha(023BSCIT050)");
    return 0;
}
