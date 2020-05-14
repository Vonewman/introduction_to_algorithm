"""
- Implementation of the insertion sort algorithm in python
- Author: Abdoulaye Diallo
- Complexity O(n^2)
"""


def insertionSort(a):
    """ Implementation in python of the insertion sort algorithm 
        - Complexity O(n²)
    """
    for j in range(1, len(a)):
        key = a[j]
        i = j - 1
        while (i > -1 and a[i] > key):
            a[i+1] = a[i]
            i = i-1
        a[i+1] = key

    return a 

if __name__ == '__main__':
    arr = [5, 2, 4, 6, 1, 3]
    print(insertionSort(arr))
