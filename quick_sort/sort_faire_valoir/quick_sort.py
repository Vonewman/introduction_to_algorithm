def sort_faire_valoir(A, i, j):
    if A[i] > A[j]:
        A[i], A[j] = A[j], A[i]
    if i+1 >= j:
        return
    k = [(j - i)/3]
    sort_faire_valoir(A, i, j-k)
    sort_faire_valoir(A, i+k, j)
    sort_faire_valoir(A, i, j-k)

if __name__ == '__main__':
    A = [7, 5, 11, 3, 8, 17]
    print(sort_faire_valoir(A, 0, len(A)-1))
