#include <iostream>

using namespace std;

double sinTaylor(double x , double eps);
void CountSinOnLineSegment(double a, double b, double eps, double h);

int main()
{
	double a, b, x, h, eps;
	cout << "Enter a, b, h, eps :" << endl;
	cin >> a >> b >> h >> eps;
	CountSinOnLineSegment(a, b, eps, h);
	system("pause");
}

double sinTaylor(double x, double eps)
{
	double term = x, sum = 0;
	for (int i = 1; fabs(term) > eps; i++)
	{
		sum += term;
		term = -term * x * x / (2 * i ) / (2 * i + 1);
	}
	return sum;
}

void CountSinOnLineSegment(double a, double b, double eps, double h)
{
	for (int i = 1; a <= b; i++)
	{
		cout << a << "      " << sinTaylor(a, eps) << "      " << sin(a) << endl;
		a += h;
	}
}