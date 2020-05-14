#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Standard heapsort
 */
template <typename Comparable>
void heapsort(vector<Comparable> & a) {
    for (int i = a.size()/2 - 1; i >= 0; --i)      /* buildHeap */
	percDown(a, i, a.size());
    for (int j = a.size() - 1; j > 0; --j) {
	swap(a[0], a[j]);
	percDown(a, 0, j);
    }
}

/**
 * Internal method of an item in the heap.
 * i is the index of item in the heap.
 * Returns the index of the left child.
 */
inline int leftChild(int i) {
    return 2 * i + 1;
}

/**
 * Internal method for heapsort that is used in deletedMax and buildHeap.
 * i is the position from which to percolate down.
 * n is the logical size of the binary heap.
 */
template <typename Comparable>
void percDown(vector<Comparable> & a, int i, int n) {
    int child;
    Comparable tmp;

    for (tmp = move(a[i]); leftChild(i) < n; i = child) {
	child = leftChild(i);
	if (child != n-1 && a[child] < a[child+1])
	    ++child;
	if (tmp < a[child])
	    a[i] = move(a[child]);
	else
	    break;
    }
    a[i] = move(tmp);
}

int main() {
    return 0;
}
