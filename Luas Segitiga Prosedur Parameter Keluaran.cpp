#include <stdio.h>
#include <windows.h>
void setcolor (unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute (hConsoleOutput, color);
}
void LuasSegitiga (float a, float t, float *L)
{
	*L = (a*t)/2;
}

main()
{
	setcolor (11);
	int i, N;
	float a, t, L;
	printf ("Banyaknya segitiga= "); scanf ("%d", &N);
	for (i=1; i<=N; i++)
	{
	printf ("Alas Segitiga= "); scanf ("%f", &a);
	printf ("Tinggi Segitiga= "); scanf ("%f", &t);
	LuasSegitiga (a, t, &L);
	printf ("Luas Segitiga adalah= %f", L); printf ("\n");
    }
}
