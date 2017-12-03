#include <iostream>

using namespace std;

double cosTaylor(double x, double eps);

int main()
{
	double x, eps;
	cout << "Enter 0 < epsilon < 1, after that enter x:";
	cin >> eps >> x;
	cout << cosTaylor(x, eps) << " " << endl << cos(x);
	system("pause");
}

double cosTaylor(double x, double eps)
{
	double term = 1, sum = 0;
	for (int i = 0; fabs(term) > eps; i++)
	{
		sum += term;
		term = -term * x * x / (2 * i + 1) / (2 * i + 2);
	}
	return sum;
}


