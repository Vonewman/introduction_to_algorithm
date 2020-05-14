#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

#define parent(i) (2/i)
#define left(i) (2*i + 1)
#define right(i) (2*i + 2)

void max_heapify(vector<int>& A, int i);

int main() {
    return 0;
}

//Time Complexity T(n)=O(lgn)
void max_heapify(vector<int>& A, int i) {
    int l = left(i);
    int r = right(i);
    int largest;
    
    if ( l <= A.size() && A[l] > A[i] )
    {
	largest = l;
    } else {
	largest = i;
    }

    if (r <= A.size() && A[r] > A[largest]) {
	largest = r;
    }

    if (largest != i) {
	swap(A[i], A[largest]);
	max_heapify(A, largest);
    }
    
}
