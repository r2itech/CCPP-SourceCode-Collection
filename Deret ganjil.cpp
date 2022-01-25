#include <iostream>
#include <windows.h>
void setcolor (unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput, color);
}
using namespace std;
int main ()
{
	setcolor (10);
	int N, K, U, Jumlah;
	cout << "Masukan jumlah suku = ";
	cin >> U;
	Jumlah = 0;
	K = 1;
	N = 1;
	do {Jumlah = K+Jumlah;
	    K = K+2;
	    N = N+1;
	} while (N<=U);
	cout << "Jumlah deret " <<U << " bilangan ganjil = " << Jumlah;
}
