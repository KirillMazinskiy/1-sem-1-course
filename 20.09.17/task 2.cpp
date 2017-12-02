#include <iostream>

using namespace std;

char WriteFirstNumberInAWord(int num, int n);
char WriteSecondNumberInAWord(int num,  int n);
char WriteNumberInAWordBetweenNineAndTwenty(int num, int n);
void CheckValue(int num, int n);

int main()
{
	int num, n = 0;
	cout << "Enter number from 0 to 100: " <<  endl;
	cin >> num; 
	CheckValue(num, n);
	system("pause");
}

char WriteNumberInAWordBetweenNineAndTwenty(int num, int n)
{
	n = num % 10 + 10;
	switch (n)
	{
	case 10: cout << "ten ";  break;
	case 11: cout << "eleven ";  break;
	case 12: cout << "twelve";  break;
	case 13: cout << "thirteen ";  break;
	case 14: cout << "fourteen ";  break;
	case 15: cout << "fifteen ";  break;
	case 16: cout << "sixteen ";  break;
	case 17: cout << "seventeen ";  break;
	case 18: cout << "eighteen ";  break;
	case 19: cout << "nineteen ";  break;
	}
	return n;
}

char WriteFirstNumberInAWord(int num, int n)
{
	n = (num - num % 10) / 10 ;
	switch (n)
	{
	
	case 2: cout << "twenty";  break;
	case 3: cout << "thirty ";  break;
	case 4: cout << "fourty";  break;
	case 5: cout << "fifty ";  break;
	case 6: cout << "sixty";  break;
	case 7: cout << "seventy ";  break;
	case 8: cout << "eighty ";  break;
	case 9: cout << "ninety";  break;
	}
	return n;
}

char WriteSecondNumberInAWord(int num, int n)
{
	n = num % 10;
	switch (n)
	{
	case 0: break;
	case 1: cout << "one";  break;
	case 2: cout << "two";  break;
	case 3: cout << "three ";  break;
	case 4: cout << "four";  break;
	case 5: cout << "five ";  break;
	case 6: cout << "six";  break;
	case 7: cout << "seven ";  break;
	case 8: cout << "eight";  break;
	case 9: cout << "nine";  break;
	}
	return n;
}

void CheckValue(int num, int n)
{
	if (num == 0)
	{
		cout << "zero" << endl;
	}
	else if ( num < 10 )
	{
		cout << WriteSecondNumberInAWord(num, n) << " " << endl;
	}
	else if (num >= 10 && num < 20)
	{
		cout << WriteFirstNumberInAWord(num, n) << " " << endl;
	}
	else if (num >= 20 && num < 100)
	{
		cout <<  WriteSecondNumberInAWord(num, n) << " " << WriteFirstNumberInAWord(num, n) << " " << endl;
	}
    else cout << "valid value!!! Try again!!! ";
}

