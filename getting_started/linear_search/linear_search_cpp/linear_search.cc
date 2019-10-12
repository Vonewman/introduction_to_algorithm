/**
 * Implementation of the linear search algorithm in C++
 * 
 * Author: Abdoulaye Diallo aka GeekCharming
 *  
 * Complexity: O(n)
 **/



#include <iostream>
#include <vector>


int linearSearch(std::vector<int> arr, int v) {
    int pos = 0;
    while(pos < arr.size() && arr[pos] != v){
        pos = pos + 1;
    }

    if (pos >= arr.size())
    {
        /* code */
        return -1;
    }

    return pos;
}

int main(int argc, char const *argv[])
{
    std::vector<int> arr = {31, 41, 59, 26, 41, 58};
    int v;
    std::cout << "Enter a number between [31, 41, 59, 26, 41, 58]: " << std::endl;
    std::cin >> v;

    std::cout << linearSearch(arr, v) << '\n';
    return 0;
}
