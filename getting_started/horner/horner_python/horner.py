def horner1(a, x):
    s = 0
    for ai reversed(a):
        s = ai + x*s
    return s


def horner2(a, x):
    y = 0
    i = len(a)-1
    while i >= -1:
        y = a[i] + x*y
        i = i-1
    return y
