#include <iostream>
#include <conio.h>
using namespace std;

long int pangkat(int a, int b)
{
	if (b==0)
	{
		return (1);
	}
	else
	{
		return (a*pangkat (a, b-1));
	}
}

int main()
{
	long int a, b, hasil;
	cout << "Mencari Nilai Hasil Pangkat\n";
	cout << "Masukan nilai yang akan dipangkatkan: ";
	cin >> a;
	cout << "Masukan Nilai Pangkat: ";
	cin >> b;
	hasil = pangkat(a, b);
	cout << "Hasil Dari " << a << "^" << b << " = " << hasil;
	getch();
}
