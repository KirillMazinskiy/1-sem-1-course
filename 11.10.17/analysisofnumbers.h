#pragma once
#include<iostream>

using namespace std;

long long CountNumberOfDigits(long long a);
int FindMax(long long a);
int FindMin(long long a);
bool AnalyzeForDivisibility(int num);
void WriteResultOfAnalyzeForDivisibility(int num);
int fibonachi(int num);

long long CountNumberOfDigits(long long a)
{
	int num = 0;
	while (a > 0)
	{
		a = a / 10;
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

bool AnalyzeForDivisibility(int num)
{
	int n = 0;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0) return false;
	}
	return true;
}

void WriteResultOfAnalyzeForDivisibility(int num)
{
	bool t = AnalyzeForDivisibility(num);
	if (num == 1) cout << (num) << " is a prime number";
	else if (t == false) cout << (num) << " is a composite  number";
	else cout << (num) << " is a prime number";
}

int fibonachi(int num)
{
	int ra, rb, sum;
	ra = 0, rb = 1, sum = 0;

	for (int i = 0; num < 3 && i < num - 1; i++)
	{
		sum = ra + rb;
		ra = rb;
		rb = sum;
	}

	for (int i = 0; num >= 3 && i < num - 2; i++)
	{
		sum = ra + rb;
		ra = rb;
		rb = sum;
	}
	return sum;
}