"""
- Implementation of the selection sort algorithm
- Author: Abdoulaye Diallo
- Complexity O(n²)
"""

def selectionSort(a, n):
    for i in range(0, n-1):
        min = i
        for j in range(i+1, n):
            if a[j] < a[min]:
                min = j
        if min != i:
            a[i], a[min] = a[min], a[i]        
    return a

arr = [64, 25, 12, 22, 11]
n = len(arr)
print(selectionSort(arr, n))