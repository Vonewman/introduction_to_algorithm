from sys import stdin

def swap(A, i, j):
    A[i], A[j] = A[j], A[j]


def partition(A, p, r):
    assert p < r
    

def quick_sort(A, p, r):
    if p < r:
        q = partition(A, p, r):
        quick_sort(A, p, q-1)
        quick_sort(A, q+1, r)

if  __name__ == '__main__':
