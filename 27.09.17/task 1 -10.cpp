#include<iostream>
#include "primers.h"

using namespace std;

int main()
{
	double sum = 0;
	int n, m;
	cout << "Pls choose a primer (1 - 10) : " << endl;
	cin >> m;
	cout << "Enter a number" << endl;
	cin >> n ;
	ChoosingPrimer(m, n, sum);
	system("pause");
}