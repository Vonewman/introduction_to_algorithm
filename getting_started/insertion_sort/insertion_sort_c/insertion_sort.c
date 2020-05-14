/**
 * Implementation of the insertion sort algorithm in C
 * Author : Abdoulaye Diallo
 * Complexity O(n^2)
 **/

#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *arr, int n);
void printArray(int *arr, int n);

int main()
{
    int arr[] = {5, 3, 4, 6, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    printArray(arr, n);
    return EXIT_SUCCESS;
}

void insertionSort(int *arr, int n) {
    int i, j, key;
    for (j = 1; j < n; j++) {
	key = arr[j];
	i = j-1;

	while (i > -1 && arr[i] > key) {
	    arr[i+1] = arr[i];
	    i = i-1;
	}

	arr[i+1] = key;
    }
}

void printArray(int *arr, int n) {
    int i;
    for (i = 0; i < n; i++)
	printf("%d ", arr[i]);
    
    printf("\n");
}
