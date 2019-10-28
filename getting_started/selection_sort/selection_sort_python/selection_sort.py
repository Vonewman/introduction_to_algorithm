"""
- Implementation of the selection sort algorithm
- Author: Abdoulaye Diallo
- Complexity O(n²)
"""

#def selectionSort(a, n):
#    for i in range(0, n-1):
#        min = i
#        for j in range(i+1, n):
#            if a[j] < a[min]:
#                min = j
#        if min != i:
#            a[i], a[min] = a[min], a[i]        
#    return a



def select(T):
    n = len(T)
    for i in range(n-1):
        min_j = i
        min_x = T[i]
        for j in range(i+1, n):
            if T[j] < min_x:
                min_j = j
                min_x = T[j]
        T[min_j] = T[i]
        T[i] = min_x

def printList(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()
    

if __name__ == "__main__":    
    arr = [64, 25, 12, 22, 11]
    print("Given list is ")
    printList(arr)

    select(arr)

    print("Sorted list is ")
    printList(arr)