#include <iostream>

using namespace std;

void AddArray(int* a, const int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = a[i] + 5;
	}
}

void Print(int* a, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
		cout << "   ";

		if (i == 9)
		{
			cout << "    " << endl;
		}
	}
}


int Audit(int* a, const int n)
{
	for (int i = 1; i < n; i++) 
		{
			if (a[i] > a[i - 1]) 
			{
				return 0;
			}
		}
	return 1;
}


int main()
{
	const int n = 10;
	int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	AddArray(a, n);

	cout << "ARRAY = ";
	cout << "    ";

	Print(a, n);

	Audit(a, n);


	cout << " Condition = " << Audit(a, n) << endl;

	return 0;
}