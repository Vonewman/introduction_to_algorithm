# Implementation of the insertion Sort algorithm in an decreasing order
# Author : Abdoulaye Diallo
# Complexity O(n²)

def insertionSortDecreasing(a):
    for j in range(1, len(a)):
        key = a[j]
        i = j-1
        while i > -1 and a[i] < key:
            a[i+1] = a[i]
            i = i-1
        a[i+1] = key
    return  a


a = [5, 2, 4, 6, 1, 3]

print("{}".format(insertionSortDecreasing(a)))