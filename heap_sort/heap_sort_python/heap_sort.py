
def parent(i):
    return (i-1)//2

def gauche(i):
    return 2*i + 1

def droite(i):
    return 2*i + 2

def entasser_max(A, i):
    # Temps d'execution O(lgn)
    '''
    entasser_max(A, i) est un sous-programme important pour la 
    manipulation des tax max, qui prend en entree un tableau A et un
    indice i.Quand Tas max est appele,on suppose que les arbres 
    binaires enracinees en gauche(i) et droite(i) sont des tas max,
    mais que A[i] peut etre plus petit que ses enfants, 
    violant ainsi la propriete de tas max.
    '''
    n = len(A)
    l = gauche(i)
    r = droite(i)
    if l <= n-1 and A[l] > A[i]:
        max_i = l
    else:
        max_i = i
    if r <= n-1 and A[r] > A[max_i]:
        max_i = r
    if max_i != i:
        A[i], A[max_i] = A[max_i], A[i]
        entasser_max(A, max_i)

def construire_tas_max(A):
    # S'execute en temps lineaire O(n)
    n = len(A)
    for i in range(n//2, -1, -1):
        entasser_max(A, i)

def tri_par_tas(A):
    n = len(A)
    taille_A = n - 1
    construire_tas_max(A)
    for i in range(n, 1):
        A[0], A[i] = A[i], A[0]
        taille_A = taille_A - 1
        entasser_max(A, 0)
        
# Test
if __name__ == "__main__":
    Arr = [4, 1, 3, 2, 16, 9, 10, 14, 8, 7]
    tri_par_tas(Arr)
    print("{}".format(Arr))
