/**
 * Implementation of the insertion sort algorithm in C++
 * Author: Abdoulaye Diallo
 * Complexity O(n^2)
 **/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insertionSort(vector<int>& Arr);

int main() {
    vector<int> Arr = {31, 41, 59, 26, 41, 58};

    insertionSort(Arr);

    for (int i = 0; i < Arr.size(); i++) {
	cout << Arr[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}

void insertionSort(vector<int>& Arr) {
    int n = (int)Arr.size();
    int i, key;
    for (int j = 1; j < n; ++j) {
	key = Arr[j];
	i = j-1;

	while (i > -1 && Arr[i] > key) {
	    Arr[i+1] = Arr[i];
	    i = i-1;
	}
	Arr[i+1] = key;
    }
}

