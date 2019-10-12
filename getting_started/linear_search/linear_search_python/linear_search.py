"""
-Implementation of linearSearch algorithm in python
-Author: Abdoulaye Diallo
-Complexity: O(n)
"""

def linearSearch(a, v):
    pos = 0
    while (pos < len(a) and a[pos] != v):
        pos = pos + 1
    
    if pos >= len(a):
        return None
    return pos

arr = [31, 41, 59, 26, 41, 58]
v = 26
print("{}".format(linearSearch(arr, v)))