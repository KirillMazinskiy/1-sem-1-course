#include <iostream>

using namespace std;

double AnaluzePolinom(double ynext, double yprev, double eps);

int main()
{
	double yprev, ynext, eps;
	cout << AnaluzePolinom(ynext, yprev, eps) << " ";
}

double AnaluzePolinom(double ynext, double yprev, double eps)
{
	double n = 0;
	n = fabs(ynext - yprev);
	while(n > eps)
	{
		ynext = 0.5*(yprev + yprev / 2);
		yprev = ynext;
	}
	return ynext;
}