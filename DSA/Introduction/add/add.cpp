#include <iostream>

using namespace std;

template <typename T>
T sum(T const& a, T const& b)
{
    return a+b;
}

int main()
{
    int num1, num2, result;

    cin >> num1 >> num2;

    result = sum(num1, num2);

    cout << result << "\n";

    return 0;
}

