#pragma once
#include<iostream>

using namespace std;

double CountSinN(int n, double sum);
double fact(int n, double sum);
void ChoosingPrimer(int m, int n, double sum);
double CountPrimer1(int n, double sum);
double CountPrimer2(int n, double sum);
double CountPrimer3(int n, double sum);
double CountPrimer4(int n, double sum);
double CountPrimer5(int n, double sum);
double CountPrimer6(int n, double sum);
double CountPrimer7(int n, double sum);
double CountPrimer8(int n, double sum);
double CountPrimer9(int n, double sum);
double CountPrimer10(int n, double sum);

double CountPrimer1(int n, double sum)
{
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += 1 / (double)i;
	}
	return sum;
}

double CountPrimer2(int n, double sum)
{
	sum = 1;
	for (int i = 0; i < n; i++)
	{
		sum *= 2;
	}
	return sum;
}

double CountPrimer3(int n, double sum)
{
	sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum *= 1 + 1 / (double)i / (double)i;
	}
	return sum;
}

double CountPrimer4(int n, double sum)
{
	sum = 0;
	for (int i = 1; i <= n ; i++)
	{
		sum += pow(-1, i + 1) / i / ( i + 1);
	}
	return sum;
}

double CountPrimer5(int n, double sum)
{
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += 1 / (double)i / (double)i / (double)i / (double)i / (double)i;
	}
	return sum;
}

double CountPrimer6(int n, double sum)
{
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += 1 / (2*(double)i + 1)/ (2 * (double)i + 1);
	}
	return sum;
}

double CountPrimer7(int n, double sum)
{
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += pow(-1, i) / (2 * (double)i + 1);
	}
	return sum;
}

double CountPrimer8(int n, double sum)
{
	double p, k = 1;
	p = 0;
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			k *= j;
			p += (1.0 / j);

		}
		sum += (k / p);
		k = 1;
		p = 0;
	}
	return sum;
}

double CountPrimer9(int n, double sum)
{
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum = sqrt (2 + sum) ;
	}
	return sum;
}

double CountPrimer10(int n, double sum)
{
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += 1 / CountSinN(n, sum);
	}
	return sum;
}

double fact(int n, double sum)
{
	sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum *= (double)i;
	}
	return sum;
}

double CountSinN(int n, double sum)
{
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += sin(i);
	}
	return sum;
}

void ChoosingPrimer(int m, int n, double sum)
{
	if (m > 0 && m <= 10)
	{
		switch (m)
		{
		case 1:cout << CountPrimer1(n, sum) << " " << endl;  break;
		case 2:cout << CountPrimer2(n, sum) << " " << endl;  break;
		case 3:cout << CountPrimer3(n, sum) << " " << endl;  break;
		case 4:cout << CountPrimer4(n, sum) << " " << endl;  break;
		case 5:cout << CountPrimer5(n, sum) << " " << endl;  break;
		case 6:cout << CountPrimer6(n, sum) << " " << endl;  break;
		case 7:cout << CountPrimer7(n, sum) << " " << endl;  break;
		case 8:cout << CountPrimer8(n, sum) << " " << endl;  break;
		case 9:cout << CountPrimer9(n, sum) << " " << endl;  break;
		case 10:cout << CountPrimer10(n, sum) << " " << endl;  break;
		}
	}
	else cout << "valid data, try again";
}