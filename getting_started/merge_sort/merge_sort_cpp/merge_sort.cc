/**
 * Implementation of the merge sort algorithm in C++
 * 
 * Author : Abdoulaye Diallo
 * 
 * Complexity: O(nlogn) 
 **/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

//The declaration of the merge sort function
void merge(int A[], int p, int q, int r);
int* mergeSort(int A[], int p, int r);

int main(int argc, char const *argv[])
{
    int arr []{12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[1]);
    
    int* sortedOutput = mergeSort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        std::cout << sortedOutput[i] << " ";
    }

    std::cout << std::endl;
    
    return 0;
}

void merge(int A[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int* leftArray = new int[n1+1];
    int* rightArray = new int[n2+1];

    for (int i = 0; i < n1; i++)
        leftArray[i] = A[p + i];
    for (int j = 0; j < n2; j++)
        rightArray[j] = A[q+j+1];
    
    leftArray[n1] = 999;
    rightArray[n2] = 999;

    int i = 0;
    int j = 0;

    for (int k = p; k <= r; k++) 
    {
        if (leftArray[i] <= rightArray[j])
        {
            A[k] = leftArray[i];
            i = i + 1;
        }
        else
        {
            A[k] = rightArray[j];
            j = j + 1;
        }
    }
    
    delete leftArray;
    leftArray = nullptr;
    delete rightArray;
    rightArray = nullptr;
}

int* mergeSort(int A[], int  p, int r) {
    if (p < r)
    {
        int q = (p + r) / 2;
        mergeSort(A, p, q);
        mergeSort(A, q + 1, r);
        merge(A, p, q, r); 
    }

    return A;
}
