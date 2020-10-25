#include <iostream>
#include <cmath>

using namespace std;

int factorial(int);

int main()
{
	int n;

	cin >> n;

	cout << factorial(n) << endl;

	return 0;
}

int factorial(int n)
{
	unsigned long long fact = 1;
	int i = 1;

	while (i <= n)
	{
		fact = fact * i;
		i = i + 1;
	}

	return fact;
}
