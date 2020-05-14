#include <stdio.h>
#include <stdlib.h>

void merge(int A[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;

    /* Create arrays leftArray[1..n1+1] and rightArray[1..n2+1] */
    int* leftArray = new int[n1+1];
    int* rightArray = new int[n2+1];

    for (int i = 0; i < n1; ++i)
	leftArray[i] = A[p + i];
    for (int j = 0; j < n2; ++j)
	rightArray[j] = A[q+j+1];

    leftArray[n1] = 999;
    rightArray[n2] = 999;

    int i = 0;
    int j = 0;

    for (int k = p; k <= r; k++) {
	if (leftArray[i] <= rightArray[j]) {
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


int* mergeSort(int A[], int p, int r) {
    if (p < r) {
	int q = (p + r) / 2;
	mergeSort(A, p, q);
	mergeSort(A, q + 1, r);
	merge(A, p, q, r);
    }

    return A;
}
