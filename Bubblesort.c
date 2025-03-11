#include <stdio.h>
#define N 10000

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
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

    bubbleSort(arr, n);
    printf("Sorted array: ");
    printArray(arr, n);
    printf("Program Executed By Aadarsha Jha(023BSCIT050)");
    return 0;
}
