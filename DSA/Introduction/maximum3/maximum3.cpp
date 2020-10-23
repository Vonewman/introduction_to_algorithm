#include <iostream>
#include <sstream>
#include <memory>

using namespace std;

int maximum3(int const&, int const&, int const&);

int main()
{
    int num1, num2, num3;

    cout << "Give 3 numbers: " << "\n";
    cin >> num1 >> num2 >> num3;

    cout << "The maximum between those number is: "
    << maximum3(num1, num2, num3) << "\n"; 
    return 0;
}


int maximum3(int const& a, int const& b, int const& c)
{
    if (a > b)
    {
        if (a > c) 
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}