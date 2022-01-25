#include <stdio.h>
#include <windows.h>
void setcolor (unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput, color);
}
main()
{
	setcolor (10);
	int N, K, U, Jumlah;
	printf ("Masukan jumlah suku = ");
	scanf ("%d", &N);
	Jumlah = 0;
	K = 1;
	U = 1;
	do {Jumlah = Jumlah + K;
	    K = K+2;
	    U = U+1;
		} while (U <= N);
	printf ("Jumlah deret %d", N); printf(" bilangan ganjil = %d", Jumlah);
}
