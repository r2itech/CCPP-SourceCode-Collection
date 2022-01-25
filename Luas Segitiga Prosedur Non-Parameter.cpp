#include <stdio.h>
#include <conio.h>
#include <windows.h>
void setcolor (unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute (hConsoleOutput, color);
}
void LuasSegitiga ()
{
	float alas, tinggi, luas;
	printf ("Alas Segitiga ? "); scanf ("%f", &alas);
	printf ("Tinggi Segitiga ? "); scanf ("%f", &tinggi);
	luas = (alas*tinggi)/2;
	printf ("Luas Segitiga= %f", luas); printf ("\n");
}

main()
{
	setcolor (107);
	int i, N;
	printf ("Berapa banyak segitiga ? "); scanf("%d", &N);
	for (i=1; i<=N; i++)
	{
		LuasSegitiga();
	}
getch();
}
