/**
 * Implementation of the insertion sort algorithm in C++
 * Author: Abdoulaye Diallo
 * Complexity O(n^2)
**/



#include "insertion_sort.h"
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main() {
    vector<int> Arr = {31, 41, 59, 26, 41, 58};

    insertionSort(Arr);

    for (int i = 0; i < Arr.size(); i++) {
	cout << Arr[i] << " ";
    }

    cout << endl;

    return (0);
}
