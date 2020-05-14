def fils_g(V, i):
    if 2*i+1 < len(V):
        return 2*i+1
    else:
        return None

def fils_d(V, i):
    if 2*i+2 < len(V):
        return 2*i+2
    else:
        return None

def fils(V, i):
    '''renvoie la liste des fils'''

    if 2*i+2 < len(V):
        return [2*i+1, 2*i+2]
    elif 2*i+1 < len(V):
        return [2*i+1]
    else:
        return []

def parent(V, i):
    if i == 0 and i >= len(V):
        return None
    else:
        return (i-1)//2

def est_un_tas(V):

    for i in range(1, len(V)):
        if V[parent(V, i)] > V[i]:
            return False
        else:
            pass
    return True

def tas_local(V, i):
    '''
    on permute eventuellement i et le plus petit de ses fils;
    on ordonne recursivement le fils dont le noeud a ete permute
    '''
    Lf = fils(V, i)

    if len(Lf) == 1 and V[Lf[0]] < V[i]:
        V[i], V[Lf[0]] = V[Lf[0]], V[i]
        tas_local(V, Lf[0])

    elif len(Lf) == 2:

        if V[Lf[0]] < V[i] and V[Lf[0]] <= V[Lf[1]]:
            V[i], V[Lf[0]] = V[Lf[0]], V[i]
            tas_local(V, Lf[0])

        elif V[Lf[1]] < V[i]:
            V[i], V[Lf[1]] = V[Lf[1]], V[i]
            tas_local(V, Lf[1])

    return V

def transformer_en_tas(V):

    n = len(V)
    '''on ne traite pas les feuilles!'''
    for i in range((n-1)//2, -1, -1):
        tas_local(V, i)
    return V
