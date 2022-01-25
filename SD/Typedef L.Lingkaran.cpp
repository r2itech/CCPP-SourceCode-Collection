#include <stdio.h>
#include <windows.h>
void setcolor (unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput, color);
}
typedef struct lingkaran
{
	const float phi=3.14;
	float r, L, K;
};
main()
{
	setcolor(11);
	lingkaran Ling;
	printf ("Masukan panjang jari-jari lingkaran: "); scanf ("%f", &Ling.r);
	Ling.L=Ling.phi*(Ling.r*Ling.r);
	Ling.K=2*Ling.phi*Ling.r;
	printf ("Luas lingkaran= %f\n", Ling.L);
	printf ("Keliling Lingkaran= %f", Ling.K);
}
