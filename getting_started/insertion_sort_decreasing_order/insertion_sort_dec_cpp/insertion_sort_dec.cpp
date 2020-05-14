/**
 * Implementation of the insertion sort algorithm in an decreasing order
 * Author : Abdoulaye Diallo
 * Complexity O(n²)
 */


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insertionSortDecreasing(vector<int> & Arr);

int main() {
    vector<int> Arr = {31, 41, 59, 26, 41, 58};

    insertionSortDecreasing(Arr);

    for (int i = 0; i < Arr.size(); i++) {
	cout << Arr[i] << " ";
    }

    cout << endl;
    
    return 0;
}

void insertionSortDecreasing(vector<int> & Arr) {
    int n = (int)Arr.size();
    int i, key;
    for (int j = 1; j < n; ++j) {
	key = Arr[j];
	i = j-1;

	while (i > -1 && Arr[i] < key) {
	    Arr[i+1] = Arr[i] ;
	    i = i-1;
	}
	Arr[i+1] = key;
    }
}
