/**
 * Implementation of the merge sort algorithm in C++
 * 
 * Author : Abdoulaye Diallo
 * 
 * Complexity: O(nlogn) 
 **/
#include <iostream>
#include "merge_sort.hpp"

using namespace std;

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
        cout << sortedOutput[i] << " ";
    }

    cout << '\n';
    
    return 0;
}

