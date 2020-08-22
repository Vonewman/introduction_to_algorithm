// Solving sorting using the STL libraries


#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <stdexcept>
using namespace std;

int main()
{
    const int SIZE = 6;
    int array[SIZE] = {31, 41, 59, 26, 41, 58};
    vector< int > integers(array, array + SIZE);
    ostream_iterator<int> output(cout, " ");

    //cout << "Vector intgers contains: ";
    //copy(begin(integers), end(integers), output);
    
    //cout << endl;

    cout << "After sorting with STL: ";
    sort(begin(integers), end(integers));

    copy(begin(integers), end(integers), output);
    
    cout << endl;
    
    return 0;
}
