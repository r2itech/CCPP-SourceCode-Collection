//Program Tugas Algoritma Modul 9 (Review Modul Prosedur dan Fungsi
//Dibuat oleh Dede Rian
#include <stdio.h>
#include <windows.h>
void setcolor (unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput, color);
}
float tambah (float a, float b);
float kurang (float a, float b);
float kali (float a, float b);
float bagi (float a, float b);

main ()
{
	setcolor(11);
	int i, N=30;
	float a, b, c;
	printf ("Masukkan nilai a : "); scanf ("%f", &a);
	printf ("Masukkan nilai b : "); scanf ("%f", &b);
	printf ("a + b = %f \n", c = tambah(a, b));
	for (i=1; i<=N; i++)
	{
		printf ("=");
	}
	printf ("\n");
	printf ("a - b = %f \n", c = kurang(a, b));
	for (i=1; i<=N; i++)
	{
		printf ("=");
	}
	printf ("\n");
	printf ("a x b = %f \n", c = kali(a, b));
	for (i=1; i<=N; i++)
	{
		printf ("=");
	}
	printf ("\n");
	printf ("a / b = %f \n", c = bagi(a, b));	
}
float a, b;
float tambah(float a, float b)
{
	return a+b;
} 
float kurang(float a, float b)
{
	return a-b;
}
float kali(float a, float b)
{
	return a*b;
}
float bagi(float a, float b)
{
	return a/b;
}
