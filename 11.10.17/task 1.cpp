#include <iostream>

using namespace std;

long long CountNumberOfDigits(long long a);
int FindMax (long long a);
int FindMin(long long a);


int main()
{
	long long a;
	cout << " Enter a: " << endl; 
	cin >> a; 
	cout << CountNumberOfDigits(a) << " " << FindMax(a) << " " << FindMin(a)  <<endl;
	system("pause");
}

long long CountNumberOfDigits(long long a)
{
	int num = 0;
	while (a > 0)
	{
		a = a/10;
		num++;
	}
	return num;
}

int FindMax(long long a) 
{
	int max, j;
	max = 0; j = CountNumberOfDigits(a);
	for (int i = 1; i <= j; i++)
	{
		if (a % 10 > max) 
	    max = a % 10;
		a /= 10;
	}
	return max;
}

int FindMin(long long a)
{
	int min, j;
	min = 10; j = CountNumberOfDigits(a);
	for (int i = 1; i <= j; i++)
	{
		if (a % 10 < min)
	    min = a % 10;
		a /= 10;
	}
	return min;
}
