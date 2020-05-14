/**
 * Implementation of the selection sort algorithm in C++
 * Author: Abdoulaye Diallo
 * Complexity O(n²) 
*/




#include <iostream>
#include <cstdlib>

/*
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
*/


void selectionSort(int T[], int n) {
    int min_j, min_x;
    for (int i = 0; i < n-1; i++)
    {
        min_j = i;
        min_x = T[i];
        for (int j = i+1; j < n; j++)
        {
            if (T[j] < min_x)
            {
                min_j = j;
                min_x = T[j];
            }
        }

        T[min_j] = T[i];
        T[i] = min_x;
    }
} 

void printArray(int T[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        std::cout << T[i] << " ";
    }

    std::cout << std::endl;
}


int main(int argc, char const *argv[]) {
    int T[] = {64, 25, 12, 22, 11};
    int n = sizeof(T) / sizeof(T[0]);
    std::cout << "Given array is ";
    printArray(T, n);

    selectionSort(T, n);
    std::cout << "Sorted array is ";
    printArray(T, n);
    return EXIT_SUCCESS;
}
