#include <iostream>
#include <windows.h>
void setcolor (unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput, color);
}
using namespace std;
int main()
{
	setcolor (10);
	int K, N, Jumlah;
	cout << "Masukan jumlah suku = ";
	cin >> N;
	Jumlah = 0;
	K=1;
	do {Jumlah = Jumlah + K;
	    K = K + 1;
	} while (K<=N);
	cout << "Jumlah deret " << N << " bilangan = " << Jumlah;
}
