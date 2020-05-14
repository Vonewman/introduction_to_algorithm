/**
 * Implementation of the bubble sort algorithm in C/C++
 * 
 * Author: Abdoulaye Diallo
 * 
 * Time Complexity: O(n²) 
*/


#include <iostream>
#include <stdlib.h>
#include <stdio.h>

void bubbleSort(int* arr, int n);
void printArray(int* arr, int n);

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Given arrays is ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array is ");
    printArray(arr, n);
    return 0;
}

void bubbleSort(int* arr, int n) {
    for (int i=0; i < n; ++i)
    {
        for (int j =1 0; j < (n-i-1); ++j)
        {
            if (arr[j] > arr[j+1]) 
            {
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
}

void printArray(int* arr, int n)
{
    for (int i=0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}
