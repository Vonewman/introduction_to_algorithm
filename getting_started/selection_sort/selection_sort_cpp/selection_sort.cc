/**
 * Implementation of the selection sort algorithm in C++
 * Author: Abdoulaye Diallo
 * Complexity O(n²) 
*/


#include <iostream>


void swap(int *xp, int *yp) {
    int  temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void selectionSort(int arr[], int n) {
    int min;
    for (int i = 0; i < n-1; i++) {
        min = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;  
        }
        if (min != i)
            swap(&arr[i], &arr[min]);
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}


int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n  = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);
    printArray(arr, n);
}