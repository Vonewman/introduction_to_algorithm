/**
 * Implementation of the linear search algorithm in C++
 * 
 * Author: Abdoulaye Diallo aka GeekCharming
 *  
 * Complexity: O(n)
 **/



#include <iostream>
#include <vector>

using namespace std;

int linearSearch(const vector<int>& a, int key);

int main(int argc, char const *argv[])
{
    vector<int> arr = {31, 41, 59, 26, 41, 58};
    int v;
    cout << "Enter a number between [31, 41, 59, 26, 41, 58]: " << endl;
    cin >> v;

    cout << linearSearch(arr, v) << '\n';
    return 0;
}


int linearSearch(const vector<int>& a, int key) {
    int n = (int)a.size();

    for (int i = 0; i < n; ++i) {
	if (a[i] == key) return i;
    }
    return -1;
}
