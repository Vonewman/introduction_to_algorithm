"""
- Implementation of the merge sort algorithm in python
- Author: Abdoulaye Diallo
- Time Complexity:  O(nlogn)
"""


import math as m

# The merge procedure with O(n) time complexity
def merge(arr, p, q, r):
    # La procèdure suppose que les sous tableaux
    # arr[p..q] et arr[q+1..r] sont triés
    n1 = q-p+1
    n2 = r-q
    L = [0] * (n1+1)
    R = [0] * (n2+1)

    for i in range(0, n1):
        L[i] = arr[p+i]
    for j in range(n2):
        R[j] = arr[q+1+j]

    L[n1] = m.inf
    R[n2] = m.inf

    i, j = 0, 0
    for k in range(p, r+1):
        if L[i] <= R[j]:
            arr[k] = L[i]
            i = i+1
        else:
            arr[k] = R[j]
            j = j+1
        
# The mergeSort algorithm with an recursive call at himself

# Time Complexity : O(logn)
def mergeSort(arr, p, r):
    if (p < r):
        q = (p+r)//2
        mergeSort(arr, p, q)
        mergeSort(arr, q+1, r)
        merge(arr, p, q, r)


# Code to print the list 
def printList(arr): 
    for i in range(len(arr)):         
        print(arr[i],end=" ") 
    print()
 
# driver code to test the above code 
if __name__ == '__main__': 
    arr = [12, 11, 13, 5, 6, 7]  
    print ("Given array is", end="\n")  
    printList(arr)
    
    mergeSort(arr, 0, len(arr)-1)

    print("Sorted array is ")
    printList(arr)