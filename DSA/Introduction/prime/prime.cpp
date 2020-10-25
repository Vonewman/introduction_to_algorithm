#include <cassert>
#include <iostream>

bool isprime(int);

int main()
{
	int number{};
	
	std::cin >> number;

	assert (number >= 0);

	std::cout << isprime(number) << std::endl;
	return 0;
}


bool isprime(int n)
{
	int i = 2;
	int flag = 1;

	while (i <= n/2)
	{
		if (n % i == 0)
		{
			flag = 0;
		}

		i = i + 1;
	}

	if (flag == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}


