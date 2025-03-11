#include <stdio.h>
#define N 10000

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        // Swap
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
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

    selectionSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d  ", arr[i]);
        printf("\nProgram Executed By Aadarsha Jha(023BSCIT050)");
    return 0;
}
