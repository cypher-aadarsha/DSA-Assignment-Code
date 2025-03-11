#include <stdio.h>
#define N 10000

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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

    insertionSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
        printf("\nProgram Executed By Aadarsha Jha(023BSCIT050)");
    return 0;
}
