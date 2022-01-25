#include <stdio.h>
void LuasSegitiga (float a, float t)
{
	float l;
	l = (a*t)/2;
	printf ("Luas Segitiga adalah = %f", l);
}
main ()
{
	int i, N;
	float a, t;
	printf ("Banyaknya segitiga = "); scanf ("%d", &N);
	for (i=1; i<=N; i++)
	{
		printf ("Alas Segitiga= "); scanf ("%f", &a);
		printf ("Tinggi Segitiga= "); scanf ("%f", &t);
		LuasSegitiga (a,t); printf ("\n");
	}
}
