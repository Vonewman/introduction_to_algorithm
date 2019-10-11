/**
 * Implementation of the insertion sort algorithm in an decreasing order
 * Author : Abdoulaye Diallo
 * Complexity O(n²)
 */


#include <iostream>

void insertionSortDecreasing(int arr[], int n) {
    int key, i;
    for (int j = 2; j < n; j++) {
        key = arr[j];
        i = j-1;
        while (i > -1 && arr[i] < key) {
            arr[i+1] = arr[i];
            i = i-1;
        }
        arr[i+1] = key;
    }
}

void printArray(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << arr[i] << std::endl;
}

int main() {
    int arr[] = {31 ,41, 59, 26, 41, 58};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSortDecreasing(arr, n);
    printArray(arr, n);
    return 0;
}