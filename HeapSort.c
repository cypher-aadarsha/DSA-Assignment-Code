//Divide and Conquer Algorithm
//Heap Sort

#include <stdio.h>
#define N 10000

void heapify(int arr[], int n, int i) {
    int largest = i, left = 2 * i + 1, right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    
    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
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

    heapSort(arr, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
        printf("\nProgram Executed By Aadarsha Jha(023BSCIT050)");
    return 0;
}
