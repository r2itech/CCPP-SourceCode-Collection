#include <iostream>
#include <conio.h>
using namespace std;

long int faktorial (long int a)
{
	if (a==1)
	{
		return (1);
	}
	else if (a>1)
	{
		return (a*faktorial(a-1));
	}
	else
	{
		return (0);
	}
}

int main()
{
	system ("cls");
	long int faktor, n;
	cout << "Mencari Nilai Faktorial\n";
	cin >> n;
	faktor = faktorial(n);
	cout << n << "!" << " = " << faktor;
	getch();
}
