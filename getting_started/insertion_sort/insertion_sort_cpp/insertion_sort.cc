#include <iostream>
#include <vector>

void insertionSort(int a[], int n) {
    int i, key;
    for (int j = 1; j < n; j++) {
        key = a[j];
        i = j-1;

        while (i > -1 && a[i] > key)
        {
            a[i+1] = a[i];
            i = i-1;
        }
        a[i+1] = key;
        
    }
}


void printVector(int a[], int n) {
    int i;
    for (i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }

    std::cout << std::endl;
}

int main() {

    int arr[] = {5, 3, 4, 6, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    printVector(arr, n);
    return 0;
}