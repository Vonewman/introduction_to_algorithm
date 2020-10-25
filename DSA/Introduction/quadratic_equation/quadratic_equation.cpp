#include <iostream>
#include <cmath>

using namespace std;

void quadratic_equation(double, double, double);

int main()
{
	double a, b, c;
	
	cout << "Gives 3 numbers: ";
	cin >> a >> b >> c;

	cout << "The roots of the quadratic equations are: " << "\n";

	quadratic_equation(a, b, c);

	return 0;
}


void quadratic_equation(double a, double b, double c)
{
	double delta = b * b - 4 * a * c;

	if (delta >= 0)
	{
		double r1 = (-b - sqrt(delta) / 2*a);
		double r2 = (-b + sqrt(delta) / 2*a);
		cout << "x1 = "<<r1 << "\n" << "x2 = "<<r2 << endl;
	}
	else
	{
		double rp = -b / 2*a;
		double ip = sqrt(-delta) / 2*a;
		cout << "x1 = " <<rp << " +j(" << ip << ")" << "\n"
		  << "x2 = " <<rp << " -j(" << ip << ")" << endl;	
	}
}
