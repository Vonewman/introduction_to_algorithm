import sys
import random

def swap(A, i, j):
    A[i], A[j] = A[j], A[i]

def partition(A, g, d):
    assert g < d
    swap(A, g, random.randint(g, d-1))
    v = A[g]
    m = g
    for i in range(g+1, d):
        if A[i] < v:
            m = m+1
            swap(A, i, m)
    if m != g:
        swap(A, g, m)
    return m

def quick_sort_rec(A, g, d):
    while g < d-1:
        m = partition(A, g, d)
        if m-g < d-m-1:
            quick_sort_rec(A, g, m)
            g = m+1
        else:
            quick_sort_rec(A, m+1, d)
            d = m

def quick_sort(A):
    quick_sort_rec(A, 0, len(A))
    return A

def printList(arr):
    for i in range(len(arr)):
        print(arr[i], end=' ')
    print()

if __name__ == '__main__':
    A = [2, 3, 9, 2, 2]    
    print("The liste before we apply it to the quick_sort algorithm: ")
    printList(A)

    print("The List after we apply it to the ")
    print("{}".format(quick_sort(A)))
