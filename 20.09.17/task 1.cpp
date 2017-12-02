#include <iostream>

using namespace std;


int main()
{
	int m; 
	do
	{
		cin >> m;
		if (m < 0 && m > 10) break;
		switch (m)
		{
		case 1: cout << " was absent";  break;
		case 2: cout << " was absent";  break;
		case 3: cout << " not satisfactorily";  break;
		case 4: cout << " not satisfactorily";  break;
		case 5: cout << " satisfactorily";  break;
		case 6: cout << " satisfactorily";  break;
		case 7: cout << " good";  break;
		case 8: cout << " good";  break;
		case 9: cout << " excellent";  break;
		case 10: cout << " excellent";  break;
		}
	} 
	while (1);
	system("pause");
}
